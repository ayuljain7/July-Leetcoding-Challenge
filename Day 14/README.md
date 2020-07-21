<h3> Angle Between Hands of a Clock </h3>
<div><p>Given two numbers, <code>hour</code> and <code>minutes</code>. Return the smaller angle (in degrees) formed between the <code>hour</code> and the <code>minute</code> hand.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/12/26/sample_1_1673.png" style="width: 230px; height: 225px;"></p>

<pre><strong>Input:</strong> hour = 12, minutes = 30
<strong>Output:</strong> 165
</pre>

<p><strong>Example 2:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/12/26/sample_2_1673.png" style="width: 230px; height: 225px;"></p>

<pre><strong>Input:</strong> hour = 3, minutes = 30
<strong>Output:</strong> 75
</pre>

<p><strong>Example 3:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2019/12/26/sample_3_1673.png" style="width: 230px; height: 225px;"></strong></p>

<pre><strong>Input:</strong> hour = 3, minutes = 15
<strong>Output:</strong> 7.5
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> hour = 4, minutes = 50
<strong>Output:</strong> 155
</pre>

<p><strong>Example 5:</strong></p>

<pre><strong>Input:</strong> hour = 12, minutes = 0
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= hour &lt;= 12</code></li>
	<li><code>0 &lt;= minutes &lt;= 59</code></li>
	<li>Answers within&nbsp;<code>10^-5</code>&nbsp;of the actual value will be accepted as correct.</li>
</ul>
</div>
<div class="hints-area"><div class="css-haw22i"><div class="expandable-panel__YLuE" style="background-color: white; margin-top: 0px;"><div class="center__3_51"><div class="expand-btn__2cag"><span class="text">&nbsp;</span><i class="fa fa-lightbulb-o" aria-hidden="true"></i><span class="text">&nbsp;&nbsp;</span>Show Hint #1&nbsp;&nbsp;<i class="fa fa-caret-down" aria-hidden="true"></i></div></div><div class="expandable-wrapper__37QK"><div><div class="line__2vww"></div><div class="content__1q_0"><div>The tricky part is determining how the minute hand affects the position of the hour hand.</div></div></div></div></div></div><div class="css-haw22i"><div class="expandable-panel__YLuE" style="background-color: white; margin-top: 0px;"><div class="center__3_51"><div class="expand-btn__2cag"><span class="text">&nbsp;</span><i class="fa fa-lightbulb-o" aria-hidden="true"></i><span class="text">&nbsp;&nbsp;</span>Show Hint #2&nbsp;&nbsp;<i class="fa fa-caret-down" aria-hidden="true"></i></div></div><div class="expandable-wrapper__37QK"><div><div class="line__2vww"></div><div class="content__1q_0"><div>Calculate the angles separately then find the difference.</div></div></div></div></div></div></div>
