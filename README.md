### -
This is the fork of the [Cocotron](https://github.com/cjwl/cocotron) project by Christopher Lloyd, specifically targeted for Linux, FreeBSD etc. Aimed at providing an alternative to Qt and Gtk for free desktop environment.

## Scope

Project's scope is limeted to Darwin's stack implemetation, no additions, no custom solutions. For exaple while [CoreObject](http://coreobject.org) seems really nice, we will still stick with CoreData. 

Everything present in reference implemetations (i.e. macOS, iOS, watchOS, tvOS) is welcome…

## Goals
### Short term = Lowering Entry Bariers

* SDK-based build system
	* porting applications should be no more complex then simply selecting appropriate base SDK (Linux etc) 
* Vanilla build tools (no patched compilers, linkers etc)
	* enables expetimentation with different toolchains
* Complete source code compatibility with latest version of refrence implementation (Apple's) 
	* applications should at least build successfully without any modification (run as expected is more a mid term goal)
* Support of the latest Xcode and preferrably ver-1
	* all Apple developers are (almost) always using the latest tools (practically nobody uses Xcode 4 these days) and they are the target audience in the short term
* Downloadable and runnable build products
	* no additional setup on the host system (except maybe MinGW on Windows) should be required to test ported application's artifacts
* Ensure clear separations between layers of abstraction
	* Interfacing with display/window managers should be incapsulated in lower layers (CoreGrapics etc) and not be a part of AppKit
* Unit test coverage
	* Integrate unit tests from existing projects: GNUstep, Swift Foundation etc
	* Create basic infrastructure for project's own unit tests
* Travis CI integration for all target platforms (Linux, FreeBSD, Windows), including pull request builds
* Downloadable and installable SDK
	* Trying out the project should be as simple as downloading e.g. .dmg file and drag-and-dropping files to a symlink (~/Library/Application Support/Developer/Shared/Xcode/)
	* Note: still will require cross linker from MacPorts/Brew and Vagrant + VirtualBox
* Basic autolayout support based on [Cassowary](https://constraints.cs.washington.edu/cassowary/) (as the reference implementation itself)
	* Using original Cassowary implemtation (LGPL v2.1) as a dependency seems like a reasonable choice at the first stage, but later it will most likely need to be replaced with pure Objective-C implemetation
* Basic GTK 3 support
* Vagrant configurations for all target platforms
* `⌘+R` support
	* launching a debug session in a target VM should be as simple as doing so for macOS, iOS etc.
* View debugger support
* Storyboard support
* Asset catalog support
* Swift 3 support

### Midterm goals

* Linux/FreeBSD build support: xcodebuild and ibtool implementation
* XCTest implementation
* At least basic integration with Eclipse / Qt Creator
* Wayland support
* Full Qt and GTK support
* Ensure [is this already done?] fully accellerated rendering (via OpenGL using appropriate abstractions: CoreGraphics, CoreAnimation etc)

### Long term goals

* Andoid support
	* Handheld and embeded devices are dominating this world, so this is invitable… 
* UIKit implementation
	* It seems only rational that Apple will eventually deprecate AppKit in favor of UIKit, as has modern API, and evolves more rapidly, and already is superior in some ways (e.g. Dynamic Type) and it is used on 3 platforms out of 4. And it requires only a handful of things to be added for desktop support: drag and drop, UIDisplay, multiple window support, grid view (NSTableView) etc. 
	* For starters it may done as a wrapper around AppKit, but it seems more reasonable to turn this around upon AppKit deprecation…
* XPC implementation
	* All extensibility functionality requires this…
* IDE implementation
	* clang-based
	* extensible via Xcode plugin API and (preferrably) via Sublime 3 plugin API (via XPC)
	* Interface builder, view debugging etc.
* Native UI (without dependency on Qt/GTK)
	* Will enable development of desktop environment(s) based on this stack.

## Contributing

We encourage you to contribute to the project! Please check out the [contribution guide](/CONTRIBUTING.md) for guidelines about how to proceed.

Everyone interacting in the project and its sub-projects' codebases, issue trackers, chat rooms, and mailing lists is expected to follow project's [code of conduct](/CODE_OF_CONDUCT.md).

## License

The code is licensed under [MPL 2.0](http://mozilla.org/MPL/2.0/). Contributors are listed in [AUTHORS](/AUTHORS) file.
