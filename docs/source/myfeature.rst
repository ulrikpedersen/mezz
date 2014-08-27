MyFeature module documentation
==============================


Class documentation
-------------------

.. doxygenclass:: mine::MyFeature
   :members:
   :protected-members:
   :private-members:
   :undoc-members:



Example use
-----------

This is how you instansiate the class and operate on it::

	using namespace mine;
	
	mf = MyFeature()
	std::string rubbish = mf.generateRubbish( 45 )
	cout << rubbish;
	