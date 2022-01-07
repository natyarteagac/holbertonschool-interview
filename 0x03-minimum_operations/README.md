<h1 class="gap">0x03. Minimum Operations</h1>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be interpreted/compiled on Ubuntu 14.04 LTS using <code>python3</code> (version 3.4.3)</li>
<li>All your files should end with a new line</li>
<li>The first line of all your files should be exactly <code>#!/usr/bin/python3</code></li>
<li>A <code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
<li>Your code should be documented</li>
<li>Your code should use the <code>PEP 8</code> style (version 1.7.x)</li>
<li>All your files must be executable</li>
</ul>

</div>

<h3 class="panel-title">
      0. Minimum Operations
    </h3>

<div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="2867"></span>

<!-- Progress vs Score -->

<!-- Task Body -->
<p>In a text file, there is a single character <code>H</code>. Your text editor can execute only two operations in this file: <code>Copy All</code> and <code>Paste</code>. Given a number <code>n</code>, write a method that calculates the fewest number of operations needed to result in exactly <code>n</code> <code>H</code> characters in the file.</p>

<ul>
<li>Prototype: <code>def minOperations(n)</code></li>
<li>Returns an integer</li>
<li>If <code>n</code> is impossible to achieve, return <code>0</code></li>
</ul>

<p><strong>Example:</strong></p>

<p><code>n = 9</code></p>

<p><code>H</code> =&gt; <code>Copy All</code> =&gt; <code>Paste</code> =&gt; <code>HH</code> =&gt; <code>Paste</code> =&gt;<code>HHH</code> =&gt; <code>Copy All</code> =&gt; <code>Paste</code> =&gt; <code>HHHHHH</code> =&gt; <code>Paste</code> =&gt; <code>HHHHHHHHH</code></p>

<p>Number of operations: <code>6</code></p>

<pre><code>carrie@ubuntu:~/0x03-minoperations$ cat 0-main.py
#!/usr/bin/python3
&quot;&quot;&quot;
Main file for testing
&quot;&quot;&quot;

minOperations = __import__(&#39;0-minoperations&#39;).minOperations

n = 4
print(&quot;Min # of operations to reach {} char: {}&quot;.format(n, minOperations(n)))

n = 12
print(&quot;Min # of operations to reach {} char: {}&quot;.format(n, minOperations(n)))