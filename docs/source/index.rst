.. mezz documentation master file, created by
   sphinx-quickstart on Wed Aug 27 11:14:40 2014.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

Welcome to mezz's documentation!
================================

It really is a bit of a mess!
This is just a demo of how to use doxygen and sphinx in grand unison. This module contain some dummy C++ code
in the src/ directory and some sphinx rst documentation in the docs/ directory. 

TOC tree
--------

.. toctree::
   :maxdepth: 2

   myfeature

.. _doxygendocumentation: ../../doxyxml/html/index.html

If you want to see the full doxygen documentation (on which this is built on) then look doxygendocumentation_.
Warning: the doxygen documentation may contain rst statements as verbatim - so it may look a bit odd in places! 
 
 
Namespace
---------

.. doxygennamespace:: mine
   :outline:

Example references
------------------

Using the rst syntax for the cpp domain we can reference out doxygen documented classes and functions.

Reference to :cpp:class:`mine::MyFeature` - note that the namespace must be included when referencing classes. 

another refernece to a function :cpp:func:`MyFeature::generateRubbish()` Please note that functions dont need
to include the namespace. Oddly enough it does not seem to generate a working link (or any link) if you specify
the namespace. See for example here: :cpp:func:`mine::MyFeature::generateRubbish()`
