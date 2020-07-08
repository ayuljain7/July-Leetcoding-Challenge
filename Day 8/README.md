<h3> 3Sum </h3>
<div><p>Given an array <code>nums</code> of <em>n</em> integers, are there elements <em>a</em>, <em>b</em>, <em>c</em> in <code>nums</code> such that <em>a</em> + <em>b</em> + <em>c</em> = 0? Find all unique triplets in the array which gives the sum of zero.</p>

<p><strong>Note:</strong></p>

<p>The solution set must not contain duplicate triplets.</p>

<p><strong>Example:</strong></p>

<pre>Given array nums = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]
</pre>
</div>
<div class="hints-area"><div class="css-haw22i"><div class="expandable-panel__YLuE" style="background-color: white; margin-top: 0px;"><div class="center__3_51"><div class="expand-btn__2cag"><span class="text">&nbsp;</span><i class="fa fa-lightbulb-o" aria-hidden="true"></i><span class="text">&nbsp;&nbsp;</span>Show Hint #1&nbsp;&nbsp;<i class="fa fa-caret-down" aria-hidden="true"></i></div></div><div class="expandable-wrapper__37QK"><div><div class="line__2vww"></div><div class="content__1q_0"><div>So, we essentially need to find three numbers x, y, and z such that they add up to the given value. If we fix one of the numbers say x, we are left with the two-sum problem at hand!</div></div></div></div></div></div><div class="css-haw22i"><div class="expandable-panel__YLuE" style="background-color: white; margin-top: 0px;"><div class="center__3_51"><div class="expand-btn__2cag"><span class="text">&nbsp;</span><i class="fa fa-lightbulb-o" aria-hidden="true"></i><span class="text">&nbsp;&nbsp;</span>Show Hint #2&nbsp;&nbsp;<i class="fa fa-caret-down" aria-hidden="true"></i></div></div><div class="expandable-wrapper__37QK"><div><div class="line__2vww"></div><div class="content__1q_0"><div>For the two-sum problem, if we fix one of the numbers, say <pre>x</pre>, we have to scan the entire array to find the next number<pre>y</pre> which is <pre>value - x</pre> where value is the input parameter. Can we change our array somehow so that this search becomes faster?</div></div></div></div></div></div><div class="css-haw22i"><div class="expandable-panel__YLuE" style="background-color: white; margin-top: 0px;"><div class="center__3_51"><div class="expand-btn__2cag"><span class="text">&nbsp;</span><i class="fa fa-lightbulb-o" aria-hidden="true"></i><span class="text">&nbsp;&nbsp;</span>Show Hint #3&nbsp;&nbsp;<i class="fa fa-caret-down" aria-hidden="true"></i></div></div><div class="expandable-wrapper__37QK"><div><div class="line__2vww"></div><div class="content__1q_0"><div>The second train of thought for two-sum is, without changing the array, can we use additional space somehow? Like maybe a hash map to speed up the search?</div></div></div></div></div></div></div>