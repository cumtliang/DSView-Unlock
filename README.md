![DreamSourceLab Logo](DSView/icons/dsl_logo.svg)



# DSView 

This is a copy of DSView, where I have modified the size of the real-time memory that the oscilloscope can use. This is very helpful for capturing high-frequency signals; you can freely choose from 2M to 64M. I also modified the lock of the sampling rate and the time base, which is also very helpful for the flexibility of sampling. There are still some issues, such as compatibility issues between some sampling rates and the size of the real-time memory. It is recommended to use 24M or 12M.


<img width="1070" alt="image" src="https://github.com/cumtliang/DSView-Unlock/assets/14148856/cc1e3663-51f9-4a55-a0fb-b2e59a382291">



DSView is a GUI program for supporting various instruments from [DreamSourceLab](http://www.dreamsourcelab.com), including logic analyzers, oscilloscopes, etc. DSView is based on the [sigrok project](https://sigrok.org).

The sigrok project aims at creating a portable, cross-platform, Free/Libre/Open-Source signal analysis software suite that supports various device types (such as logic analyzers, oscilloscopes, multimeters, and more).

# Status

The DSView software is in a usable state and has official tarball releases. However, it is still a work in progress. Some basic functionality is available and working, but other things are always on the TODO list.

# Useful links

- [dreamsourcelab.com](https://www.dreamsourcelab.com)
- [kickstarter.com](https://www.kickstarter.com/projects/dreamsourcelab/dslogic-multifunction-instruments-for-everyone)
- [sigrok.org](https://sigrok.org)

# Copyright and license

DSView software is licensed under the terms of the GNU General Public License
(GPL), version 3 or later.

While some individual source code files are licensed under the GPLv2+, and
some files are licensed under the GPLv3+, this doesn't change the fact that
the program as a whole is licensed under the terms of the GPLv3+ (e.g. also
due to the fact that it links against GPLv3+ libraries).

Please see the individual source files for the full list of copyright holders.
