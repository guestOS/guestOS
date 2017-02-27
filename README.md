# Welcome to guestOS

This is the fork of the [Cocotron](https://github.com/cjwl/cocotron) project by Christopher Lloyd, primarily targeted at open-source platforms (Linux, FreeBSD etc). Aimed at becoming an alternative to Qt and Gtk for these plaforms. And built with [Ethical Design](https://ind.ie/ethical-design/) principles in mind.

Also a notable difference from the original Cocotron project is that while Cocotron tried get away with minimal dependencies, we will try to reuse as much code as possible, adding as many dependencies as necessary. 

## Scope

The scope of the project is limited to Darwin stack implemetation, without any extra additions. For exaple while [CoreObject](http://coreobject.org) seems really nice, we are still going to stick with CoreData. 

Everything present in reference implemetations (i.e. macOS, iOS, watchOS, tvOS) is welcome…

## Goals

Please check out project's [Wiki](https://github.com/guestOS/guestOS/wiki) for lists of maintairners' goals.

## Contributing

We encourage you to contribute to the project! Please check out the [contribution guide](/CONTRIBUTING.md) for guidelines about how to proceed.

Everyone interacting in the project and its sub-projects' codebases, issue trackers, chat rooms, and mailing lists is expected to follow project's [code of conduct](/CODE_OF_CONDUCT.md).

## License

The code is licensed under [MPL 2.0](http://mozilla.org/MPL/2.0/).