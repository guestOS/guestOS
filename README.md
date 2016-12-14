This is the fork of the [Cocotron](https://github.com/cjwl/cocotron) project by Christopher Lloyd, primarily targeted at open-source platforms (Linux, FreeBSD etc). Aimed at becoming an alternative to Qt and Gtk for these plaforms. And built with [Ethical Design](https://ind.ie/ethical-design/) principles in mind.

## Scope

The scope of the project is limited to Darwin stack implemetation, without any unnecessary additions. For exaple while [CoreObject](http://coreobject.org) seems really nice, we are still going to stick with CoreData. 

Everything present in reference implemetations (i.e. macOS, iOS, watchOS, tvOS) is welcome…

## Goals
### Short-term goals (Lowering Entry Barriers)

* SDK-based build system
	* Porting applications should be no more complex than simply selecting an appropriate base SDK (e.g. Linux) 
* Vanilla build tools (no patched compilers, linkers etc)
	* Will narrow the scope of the project
	* Will enable expetimentation with different toolchains
* Complete source code compatibility with the latest version of refrence implementation (currently macOS') 
	* Applications should at least build successfully without any modification (run as expected is more a mid term goal)
* Support of the latest Xcode and preferrably ver-1
	* All Apple developers are (almost) always using the latest tools (virtually nobody uses Xcode 4 these days) and they are the most likely early adopters
* Downloadable and runnable build products
	* No additional setup on the host system should be required to test ported application's artifacts
	* Use bundling strategies native to platform, e.g. AppImage on Linux 
* Ensure clear separations between layers of abstraction
	* Interfacing with display/window managers should be incapsulated in lower layers (CoreGrapics etc) and not be a part of AppKit
	* Will simplify the interaction with the project
* Unit test coverage
	* Integrate unit tests from existing projects: GNUstep, Swift Foundation etc
	* Create basic infrastructure for project's own unit tests
* Travis CI integration for all target platforms (Linux, FreeBSD, Windows), including pull request builds
	* Will dramatically simplify the workflow
* Downloadable and installable SDK
	* Trying out the project should be as simple as downloading .dmg file and drag-and-dropping files to a symlink (~/Library/Application Support/Developer/Shared/Xcode/)
	* Note: will still require cross linker from MacPorts/Brew and Vagrant + VirtualBox
* Basic autolayout support based on [Cassowary](https://constraints.cs.washington.edu/cassowary/) (as the reference implementation itself)
	* Using original Cassowary implementation (LGPL v2.1) as a dependency seems like a reasonable choice at the first stage, but most likely later it will need to be replaced with pure Objective-C implemetation
* Basic GTK 3 support
* Vagrant configurations for all target platforms
* `⌘+R` support
	* Launching a debug session in a target VM should be as simple as doing so for macOS, iOS etc.
* View debugger support
* Storyboard support
* Asset catalog support
* Swift 3 support

### Mid-term goals

* Build support on Linux/FreeBSD: xcodebuild and ibtool implementation
* XCTest implementation
* At least basic integration with Eclipse / Qt Creator
* Wayland support
* Full Qt and GTK support
* Ensure [is this already done?] fully accellerated rendering (via OpenGL using appropriate abstractions: CoreGraphics, CoreAnimation etc)

### Long-term goals

* Android support
	* Handheld and embeded devices are dominating this world, so it's invitable… 
* UIKit implementation
	* It seems only rational that Apple will eventually deprecate AppKit in favor of UIKit, as it has modern API, and evolves more rapidly, and already is superior in many ways (e.g. Dynamic Type) and it is used on 3 platforms out of 4. And it requires only a handful of things to be added for desktop support: drag and drop, UIDisplay, multiple window support, grid view (NSTableView) etc. 
	* For starters it may done as a wrapper around AppKit, but it seems more reasonable to turn this around upon AppKit's deprecation…
* XPC implementation
	* All extensibility functionality requires this…
* IDE implementation
	* Clang-based
	* Extensible via Xcode plugin API and (preferrably) via Sublime 3 plugin API (via XPC)
	* Interface builder, view debugging etc.
* Native UI (without depending on Qt/GTK)
	* Will enable development of desktop environment(s) based on this stack.

## Contributing

We encourage you to contribute to the project! Please check out the [contribution guide](/CONTRIBUTING.md) for guidelines about how to proceed.

Everyone interacting in the project and its sub-projects' codebases, issue trackers, chat rooms, and mailing lists is expected to follow project's [code of conduct](/CODE_OF_CONDUCT.md).

## License

The code is licensed under [MPL 2.0](http://mozilla.org/MPL/2.0/). Contributors are listed in [AUTHORS](/AUTHORS) file.
