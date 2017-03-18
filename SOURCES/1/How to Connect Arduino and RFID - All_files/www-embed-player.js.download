(function(){var l;function aa(a,b){function c(){}
c.prototype=b.prototype;a.prototype=new c;a.prototype.constructor=a;for(var d in b)if(Object.defineProperties){var e=Object.getOwnPropertyDescriptor(b,d);e&&Object.defineProperty(a,d,e)}else a[d]=b[d]}
for(var da="function"==typeof Object.defineProperties?Object.defineProperty:function(a,b,c){if(c.get||c.set)throw new TypeError("ES3 does not support getters and setters.");a!=Array.prototype&&a!=Object.prototype&&(a[b]=c.value)},ea="undefined"!=typeof window&&window===this?this:"undefined"!=typeof global&&null!=global?global:this,fa=["String",
"prototype","startsWith"],ha=0;ha<fa.length-1;ha++){var ia=fa[ha];ia in ea||(ea[ia]={});ea=ea[ia]}
var ja=fa[fa.length-1],ka=ea[ja],la=ka?ka:function(a,b){var c;if(null==this)throw new TypeError("The 'this' value for String.prototype.startsWith must not be null or undefined");if(a instanceof RegExp)throw new TypeError("First argument to String.prototype.startsWith must not be a regular expression");c=this+"";a+="";for(var d=c.length,e=a.length,f=Math.max(0,Math.min(b|0,c.length)),g=0;g<e&&f<d;)if(c[f++]!=a[g++])return!1;return g>=e};
la!=ka&&null!=la&&da(ea,ja,{configurable:!0,writable:!0,value:la});var m=this;function p(a){return void 0!==a}
function q(a,b,c){a=a.split(".");c=c||m;a[0]in c||!c.execScript||c.execScript("var "+a[0]);for(var d;a.length&&(d=a.shift());)!a.length&&p(b)?c[d]=b:c[d]&&c[d]!==Object.prototype[d]?c=c[d]:c=c[d]={}}
function r(a,b){for(var c=a.split("."),d=b||m,e;e=c.shift();)if(null!=d[e])d=d[e];else return null;return d}
function ma(){}
function pa(a){a.na=void 0;a.getInstance=function(){return a.na?a.na:a.na=new a}}
function qa(a){var b=typeof a;if("object"==b)if(a){if(a instanceof Array)return"array";if(a instanceof Object)return b;var c=Object.prototype.toString.call(a);if("[object Window]"==c)return"object";if("[object Array]"==c||"number"==typeof a.length&&"undefined"!=typeof a.splice&&"undefined"!=typeof a.propertyIsEnumerable&&!a.propertyIsEnumerable("splice"))return"array";if("[object Function]"==c||"undefined"!=typeof a.call&&"undefined"!=typeof a.propertyIsEnumerable&&!a.propertyIsEnumerable("call"))return"function"}else return"null";
else if("function"==b&&"undefined"==typeof a.call)return"object";return b}
function ra(a){return"array"==qa(a)}
function sa(a){var b=qa(a);return"array"==b||"object"==b&&"number"==typeof a.length}
function t(a){return"string"==typeof a}
function ta(a){return"function"==qa(a)}
function ua(a){var b=typeof a;return"object"==b&&null!=a||"function"==b}
function va(a){return a[wa]||(a[wa]=++xa)}
var wa="closure_uid_"+(1E9*Math.random()>>>0),xa=0;function ya(a,b,c){return a.call.apply(a.bind,arguments)}
function za(a,b,c){if(!a)throw Error();if(2<arguments.length){var d=Array.prototype.slice.call(arguments,2);return function(){var c=Array.prototype.slice.call(arguments);Array.prototype.unshift.apply(c,d);return a.apply(b,c)}}return function(){return a.apply(b,arguments)}}
function u(a,b,c){Function.prototype.bind&&-1!=Function.prototype.bind.toString().indexOf("native code")?u=ya:u=za;return u.apply(null,arguments)}
function Aa(a,b){var c=Array.prototype.slice.call(arguments,1);return function(){var b=c.slice();b.push.apply(b,arguments);return a.apply(this,b)}}
function Ba(a,b){for(var c in b)a[c]=b[c]}
var v=Date.now||function(){return+new Date};
function w(a,b){function c(){}
c.prototype=b.prototype;a.B=b.prototype;a.prototype=new c;a.prototype.constructor=a;a.qb=function(a,c,f){for(var d=Array(arguments.length-2),e=2;e<arguments.length;e++)d[e-2]=arguments[e];return b.prototype[c].apply(a,d)}}
;var Ca=document,x=window;function y(a){if(Error.captureStackTrace)Error.captureStackTrace(this,y);else{var b=Error().stack;b&&(this.stack=b)}a&&(this.message=String(a))}
w(y,Error);y.prototype.name="CustomError";var Da=String.prototype.trim?function(a){return a.trim()}:function(a){return a.replace(/^[\s\xa0]+|[\s\xa0]+$/g,"")};
function Ea(a,b){return a<b?-1:a>b?1:0}
function Fa(a){for(var b=0,c=0;c<a.length;++c)b=31*b+a.charCodeAt(c)>>>0;return b}
;var Ga=Array.prototype.indexOf?function(a,b,c){return Array.prototype.indexOf.call(a,b,c)}:function(a,b,c){c=null==c?0:0>c?Math.max(0,a.length+c):c;
if(t(a))return t(b)&&1==b.length?a.indexOf(b,c):-1;for(;c<a.length;c++)if(c in a&&a[c]===b)return c;return-1},z=Array.prototype.forEach?function(a,b,c){Array.prototype.forEach.call(a,b,c)}:function(a,b,c){for(var d=a.length,e=t(a)?a.split(""):a,f=0;f<d;f++)f in e&&b.call(c,e[f],f,a)},Ha=Array.prototype.map?function(a,b,c){return Array.prototype.map.call(a,b,c)}:function(a,b,c){for(var d=a.length,e=Array(d),f=t(a)?a.split(""):a,g=0;g<d;g++)g in f&&(e[g]=b.call(c,f[g],g,a));
return e};
function Ia(a,b){var c;a:{c=a.length;for(var d=t(a)?a.split(""):a,e=0;e<c;e++)if(e in d&&b.call(void 0,d[e],e,a)){c=e;break a}c=-1}return 0>c?null:t(a)?a.charAt(c):a[c]}
function Ja(a,b){var c=Ga(a,b);0<=c&&Array.prototype.splice.call(a,c,1)}
function Ka(a){var b=a.length;if(0<b){for(var c=Array(b),d=0;d<b;d++)c[d]=a[d];return c}return[]}
function La(a,b){for(var c=1;c<arguments.length;c++){var d=arguments[c];if(sa(d)){var e=a.length||0,f=d.length||0;a.length=e+f;for(var g=0;g<f;g++)a[e+g]=d[g]}else a.push(d)}}
function Ma(a,b,c,d){return Array.prototype.splice.apply(a,Na(arguments,1))}
function Na(a,b,c){return 2>=arguments.length?Array.prototype.slice.call(a,b):Array.prototype.slice.call(a,b,c)}
;function Oa(a,b){this.b=p(a)?a:0;this.f=p(b)?b:0}
Oa.prototype.equals=function(a){return a instanceof Oa&&(this==a?!0:this&&a?this.b==a.b&&this.f==a.f:!1)};
Oa.prototype.ceil=function(){this.b=Math.ceil(this.b);this.f=Math.ceil(this.f);return this};
Oa.prototype.floor=function(){this.b=Math.floor(this.b);this.f=Math.floor(this.f);return this};
Oa.prototype.round=function(){this.b=Math.round(this.b);this.f=Math.round(this.f);return this};function Pa(a,b){this.width=a;this.height=b}
l=Pa.prototype;l.aspectRatio=function(){return this.width/this.height};
l.isEmpty=function(){return!(this.width*this.height)};
l.ceil=function(){this.width=Math.ceil(this.width);this.height=Math.ceil(this.height);return this};
l.floor=function(){this.width=Math.floor(this.width);this.height=Math.floor(this.height);return this};
l.round=function(){this.width=Math.round(this.width);this.height=Math.round(this.height);return this};function Qa(a){Qa[" "](a);return a}
Qa[" "]=ma;function Ra(a,b){var c=Sa;return Object.prototype.hasOwnProperty.call(c,a)?c[a]:c[a]=b(a)}
;function Ta(){var a=Ua;try{var b;if(b=!!a&&null!=a.location.href)a:{try{Qa(a.foo);b=!0;break a}catch(c){}b=!1}return b}catch(c){return!1}}
;var Va=function(){var a=!1;try{var b=Object.defineProperty({},"passive",{get:function(){a=!0}});
m.addEventListener("test",null,b)}catch(c){}return a}();var Wa=!1,Xa="";function Ya(a){a=a.match(/[\d]+/g);if(!a)return"";a.length=3;return a.join(".")}
(function(){if(navigator.plugins&&navigator.plugins.length){var a=navigator.plugins["Shockwave Flash"];if(a&&(Wa=!0,a.description)){Xa=Ya(a.description);return}if(navigator.plugins["Shockwave Flash 2.0"]){Wa=!0;Xa="2.0.0.11";return}}if(navigator.mimeTypes&&navigator.mimeTypes.length&&(a=navigator.mimeTypes["application/x-shockwave-flash"],Wa=!(!a||!a.enabledPlugin))){Xa=Ya(a.enabledPlugin.description);return}try{var b=new ActiveXObject("ShockwaveFlash.ShockwaveFlash.7");Wa=!0;Xa=Ya(b.GetVariable("$version"));
return}catch(c){}try{b=new ActiveXObject("ShockwaveFlash.ShockwaveFlash.6");Wa=!0;Xa="6.0.21";return}catch(c){}try{b=new ActiveXObject("ShockwaveFlash.ShockwaveFlash"),Wa=!0,Xa=Ya(b.GetVariable("$version"))}catch(c){}})();
var Za=Wa,$a=Xa;var A;a:{var ab=m.navigator;if(ab){var bb=ab.userAgent;if(bb){A=bb;break a}}A=""}function C(a){return-1!=A.indexOf(a)}
;function cb(a,b){for(var c in a)b.call(void 0,a[c],c,a)}
function db(a){var b=eb,c;for(c in b)if(a.call(void 0,b[c],c,b))return c}
function fb(){var a=gb,b;for(b in a)return!1;return!0}
function hb(a,b){if(null!==a&&b in a)throw Error('The object already contains the key "'+b+'"');a[b]=!0}
function ib(a){var b={},c;for(c in a)b[c]=a[c];return b}
var jb="constructor hasOwnProperty isPrototypeOf propertyIsEnumerable toLocaleString toString valueOf".split(" ");function kb(a,b){for(var c,d,e=1;e<arguments.length;e++){d=arguments[e];for(c in d)a[c]=d[c];for(var f=0;f<jb.length;f++)c=jb[f],Object.prototype.hasOwnProperty.call(d,c)&&(a[c]=d[c])}}
;function lb(){return(C("Chrome")||C("CriOS"))&&!C("Edge")}
;function mb(){return C("iPhone")&&!C("iPod")&&!C("iPad")}
;var nb=C("Opera"),D=C("Trident")||C("MSIE"),ob=C("Edge"),pb=C("Gecko")&&!(-1!=A.toLowerCase().indexOf("webkit")&&!C("Edge"))&&!(C("Trident")||C("MSIE"))&&!C("Edge"),qb=-1!=A.toLowerCase().indexOf("webkit")&&!C("Edge"),rb=C("Macintosh"),sb=C("Windows"),tb=C("Android"),ub=mb(),vb=C("iPad"),wb=C("iPod");function xb(){var a=m.document;return a?a.documentMode:void 0}
var yb;a:{var zb="",Ab=function(){var a=A;if(pb)return/rv\:([^\);]+)(\)|;)/.exec(a);if(ob)return/Edge\/([\d\.]+)/.exec(a);if(D)return/\b(?:MSIE|rv)[: ]([^\);]+)(\)|;)/.exec(a);if(qb)return/WebKit\/(\S+)/.exec(a);if(nb)return/(?:Version)[ \/]?(\S+)/.exec(a)}();
Ab&&(zb=Ab?Ab[1]:"");if(D){var Bb=xb();if(null!=Bb&&Bb>parseFloat(zb)){yb=String(Bb);break a}}yb=zb}var Cb=yb,Sa={};
function E(a){return Ra(a,function(){for(var b=0,c=Da(String(Cb)).split("."),d=Da(String(a)).split("."),e=Math.max(c.length,d.length),f=0;0==b&&f<e;f++){var g=c[f]||"",h=d[f]||"";do{g=/(\d*)(\D*)(.*)/.exec(g)||["","","",""];h=/(\d*)(\D*)(.*)/.exec(h)||["","","",""];if(0==g[0].length&&0==h[0].length)break;b=Ea(0==g[1].length?0:parseInt(g[1],10),0==h[1].length?0:parseInt(h[1],10))||Ea(0==g[2].length,0==h[2].length)||Ea(g[2],h[2]);g=g[3];h=h[3]}while(0==b)}return 0<=b})}
var Db;var Eb=m.document;Db=Eb&&D?xb()||("CSS1Compat"==Eb.compatMode?parseInt(Cb,10):5):void 0;(function(){var a;return sb?(a=/Windows NT ([0-9.]+)/,(a=a.exec(A))?a[1]:"0"):rb?(a=/10[_.][0-9_.]+/,(a=a.exec(A))?a[0].replace(/_/g,"."):"10"):tb?(a=/Android\s+([^\);]+)(\)|;)/,(a=a.exec(A))?a[1]:""):ub||vb||wb?(a=/(?:iPhone|CPU)\s+OS\s+(\S+)/,(a=a.exec(A))?a[1].replace(/_/g,"."):""):""})();var Fb=C("Firefox"),Gb=mb()||C("iPod"),Hb=C("iPad"),Ib=C("Android")&&!(lb()||C("Firefox")||C("Opera")||C("Silk")),Jb=lb(),Kb=C("Safari")&&!(lb()||C("Coast")||C("Opera")||C("Edge")||C("Silk")||C("Android"))&&!(mb()||C("iPad")||C("iPod"));function Lb(a){return(a=a.exec(A))?a[1]:""}
(function(){if(Fb)return Lb(/Firefox\/([0-9.]+)/);if(D||ob||nb)return Cb;if(Jb)return Lb(/Chrome\/([0-9.]+)/);if(Kb&&!(mb()||C("iPad")||C("iPod")))return Lb(/Version\/([0-9.]+)/);if(Gb||Hb){var a=/Version\/(\S+).*Mobile\/(\S+)/.exec(A);if(a)return a[1]+"."+a[2]}else if(Ib)return(a=Lb(/Android\s+([0-9.]+)/))?a:Lb(/Version\/([0-9.]+)/);return""})();!pb&&!D||D&&9<=Number(Db)||pb&&E("1.9.1");D&&E("9");function Mb(){this.b="";this.f=Nb}
Mb.prototype.ma=!0;Mb.prototype.la=function(){return this.b};
var Nb={};function Ob(){this.b="";this.f=Pb}
Ob.prototype.ma=!0;Ob.prototype.la=function(){return this.b};
function Qb(a){return a instanceof Ob&&a.constructor===Ob&&a.f===Pb?a.b:"type_error:SafeUrl"}
var Rb=/^(?:(?:https?|mailto|ftp):|[^&:/?#]*(?:[/?#]|$))/i;function Sb(a){if(a instanceof Ob)return a;a=a.ma?a.la():String(a);Rb.test(a)||(a="about:invalid#zClosurez");return Tb(a)}
var Pb={};function Tb(a){var b=new Ob;b.b=a;return b}
Tb("about:blank");function Ub(){this.b=""}
Ub.prototype.ma=!0;Ub.prototype.la=function(){return this.b};
function Vb(a){var b=new Ub;b.b=a;return b}
Vb("<!DOCTYPE html>");Vb("");Vb("<br>");function Wb(a,b){var c;c=b instanceof Ob?b:Sb(b);a.href=Qb(c)}
;function Xb(a){var b=document;return t(a)?b.getElementById(a):a}
function Yb(a){if(!a)return null;if(a.firstChild)return a.firstChild;for(;a&&!a.nextSibling;)a=a.parentNode;return a?a.nextSibling:null}
function Zb(a){if(!a)return null;if(!a.previousSibling)return a.parentNode;for(a=a.previousSibling;a&&a.lastChild;)a=a.lastChild;return a}
function $b(a,b){for(var c=0;a;){if(b(a))return a;a=a.parentNode;c++}return null}
;function ac(a){bc();var b=new Mb;b.b=a;return b}
var bc=ma;function cc(a){"number"==typeof a&&(a=Math.round(a)+"px");return a}
;var dc=/^(?:([^:/?#.]+):)?(?:\/\/(?:([^/?#]*)@)?([^/#?]*?)(?::([0-9]+))?(?=[/#?]|$))?([^?#]+)?(?:\?([^#]*))?(?:#([\s\S]*))?$/;function F(a){return a.match(dc)}
function ec(a){return a?decodeURI(a):a}
function fc(a){if(a[1]){var b=a[0],c=b.indexOf("#");0<=c&&(a.push(b.substr(c)),a[0]=b=b.substr(0,c));c=b.indexOf("?");0>c?a[1]="?":c==b.length-1&&(a[1]=void 0)}return a.join("")}
function gc(a,b,c){if(ra(b))for(var d=0;d<b.length;d++)gc(a,String(b[d]),c);else null!=b&&c.push("&",a,""===b?"":"=",encodeURIComponent(String(b)))}
function hc(a,b,c){for(c=c||0;c<b.length;c+=2)gc(b[c],b[c+1],a);return a}
function ic(a,b){for(var c in b)gc(c,b[c],a);return a}
function jc(a,b){return fc(2==arguments.length?hc([a],arguments[1],0):hc([a],arguments,1))}
;var kc=!!window.google_async_iframe_id,Ua=kc&&window.parent||window;function lc(a,b){var c=mc();this.label=a;this.type=b;this.value=c;this.duration=0;this.uniqueId=this.label+"_"+this.type+"_"+Math.random()}
;function nc(a,b){this.events=[];this.f=b||m;var c=null;b&&(b.google_js_reporting_queue=b.google_js_reporting_queue||[],this.events=b.google_js_reporting_queue,c=b.b);this.b=null!=c?c:Math.random()<a}
function mc(){var a=m.performance;return a&&a.now?a.now():v()}
nc.prototype.g=function(a){var b=this.f.performance;a&&b&&b.clearMarks&&(b.clearMarks("goog_"+a.uniqueId+"_start"),b.clearMarks("goog_"+a.uniqueId+"_end"))};
nc.prototype.start=function(a,b){if(!this.b)return null;var c=new lc(a,b),d=this.f.performance;d&&d.mark&&d.mark("goog_"+c.uniqueId+"_start");return c};
nc.prototype.end=function(a){if(this.b){a.duration=mc()-a.value;var b=this.f.performance;b&&b.mark&&b.mark("goog_"+a.uniqueId+"_end");this.b&&this.events.push(a)}};var oc;if(kc&&!Ta()){var pc="."+Ca.domain;try{for(;2<pc.split(".").length&&!Ta();)Ca.domain=pc=pc.substr(pc.indexOf(".")+1),Ua=window.parent}catch(a){}Ta()||(Ua=window)}oc=Ua;var qc=new nc(1,oc);function rc(){oc.b||(z(qc.events,qc.g,qc),qc.events.length=0,qc.b=!1)}
if("complete"==oc.document.readyState)rc();else if(qc.b){var sc=function(){rc()};
oc.addEventListener?oc.addEventListener("load",sc,Va?void 0:!1):oc.attachEvent&&oc.attachEvent("onload",sc)};var tc=(new Date).getTime();function uc(a){if(!a)return"";a=a.split("#")[0].split("?")[0];a=a.toLowerCase();0==a.indexOf("//")&&(a=window.location.protocol+a);/^[\w\-]*:\/\//.test(a)||(a=window.location.href);var b=a.substring(a.indexOf("://")+3),c=b.indexOf("/");-1!=c&&(b=b.substring(0,c));a=a.substring(0,a.indexOf("://"));if("http"!==a&&"https"!==a&&"chrome-extension"!==a&&"file"!==a&&"android-app"!==a&&"chrome-search"!==a)throw Error("Invalid URI scheme in origin");var c="",d=b.indexOf(":");if(-1!=d){var e=b.substring(d+
1),b=b.substring(0,d);if("http"===a&&"80"!==e||"https"===a&&"443"!==e)c=":"+e}return a+"://"+b+c}
;/*
 gapi.loader.OBJECT_CREATE_TEST_OVERRIDE &&*/
var vc=window,wc=document,xc=vc.location;function yc(){}
var zc=/\[native code\]/;function G(a,b,c){return a[b]=a[b]||c}
function Ac(a){for(var b=0;b<this.length;b++)if(this[b]===a)return b;return-1}
function Bc(a){a=a.sort();for(var b=[],c=void 0,d=0;d<a.length;d++){var e=a[d];e!=c&&b.push(e);c=e}return b}
function I(){var a;if((a=Object.create)&&zc.test(a))a=a(null);else{a={};for(var b in a)a[b]=void 0}return a}
var Cc=G(vc,"gapi",{});var J;J=G(vc,"___jsl",I());G(J,"I",0);G(J,"hel",10);function Dc(){var a=xc.href,b;if(J.dpo)b=J.h;else{b=J.h;var c=RegExp("([#].*&|[#])jsh=([^&#]*)","g"),d=RegExp("([?#].*&|[?#])jsh=([^&#]*)","g");if(a=a&&(c.exec(a)||d.exec(a)))try{b=decodeURIComponent(a[2])}catch(e){}}return b}
function Ec(a){var b=G(J,"PQ",[]);J.PQ=[];var c=b.length;if(0===c)a();else for(var d=0,e=function(){++d===c&&a()},f=0;f<c;f++)b[f](e)}
function Fc(a){return G(G(J,"H",I()),a,I())}
;function Gc(){function a(){e[0]=1732584193;e[1]=4023233417;e[2]=2562383102;e[3]=271733878;e[4]=3285377520;B=n=0}
function b(a){for(var b=g,c=0;64>c;c+=4)b[c/4]=a[c]<<24|a[c+1]<<16|a[c+2]<<8|a[c+3];for(c=16;80>c;c++)a=b[c-3]^b[c-8]^b[c-14]^b[c-16],b[c]=(a<<1|a>>>31)&4294967295;a=e[0];for(var d=e[1],f=e[2],h=e[3],k=e[4],n,H,c=0;80>c;c++)40>c?20>c?(n=h^d&(f^h),H=1518500249):(n=d^f^h,H=1859775393):60>c?(n=d&f|h&(d|f),H=2400959708):(n=d^f^h,H=3395469782),n=((a<<5|a>>>27)&4294967295)+n+k+H+b[c]&4294967295,k=h,h=f,f=(d<<30|d>>>2)&4294967295,d=a,a=n;e[0]=e[0]+a&4294967295;e[1]=e[1]+d&4294967295;e[2]=e[2]+f&4294967295;
e[3]=e[3]+h&4294967295;e[4]=e[4]+k&4294967295}
function c(a,c){if("string"===typeof a){a=unescape(encodeURIComponent(a));for(var d=[],e=0,g=a.length;e<g;++e)d.push(a.charCodeAt(e));a=d}c||(c=a.length);d=0;if(0==n)for(;d+64<c;)b(a.slice(d,d+64)),d+=64,B+=64;for(;d<c;)if(f[n++]=a[d++],B++,64==n)for(n=0,b(f);d+64<c;)b(a.slice(d,d+64)),d+=64,B+=64}
function d(){var a=[],d=8*B;56>n?c(h,56-n):c(h,64-(n-56));for(var g=63;56<=g;g--)f[g]=d&255,d>>>=8;b(f);for(g=d=0;5>g;g++)for(var k=24;0<=k;k-=8)a[d++]=e[g]>>k&255;return a}
for(var e=[],f=[],g=[],h=[128],k=1;64>k;++k)h[k]=0;var n,B;a();return{reset:a,update:c,digest:d,Ia:function(){for(var a=d(),b="",c=0;c<a.length;c++)b+="0123456789ABCDEF".charAt(Math.floor(a[c]/16))+"0123456789ABCDEF".charAt(a[c]%16);return b}}}
;function Hc(a,b,c){var d=[],e=[];if(1==(ra(c)?2:1))return e=[b,a],z(d,function(a){e.push(a)}),Ic(e.join(" "));
var f=[],g=[];z(c,function(a){g.push(a.key);f.push(a.value)});
c=Math.floor((new Date).getTime()/1E3);e=0==f.length?[c,b,a]:[f.join(":"),c,b,a];z(d,function(a){e.push(a)});
a=Ic(e.join(" "));a=[c,a];0==g.length||a.push(g.join(""));return a.join("_")}
function Ic(a){var b=Gc();b.update(a);return b.Ia().toLowerCase()}
;function Jc(a){this.b=a||{cookie:""}}
l=Jc.prototype;l.isEnabled=function(){return navigator.cookieEnabled};
l.set=function(a,b,c,d,e,f){if(/[;=\s]/.test(a))throw Error('Invalid cookie name "'+a+'"');if(/[;\r\n]/.test(b))throw Error('Invalid cookie value "'+b+'"');p(c)||(c=-1);e=e?";domain="+e:"";d=d?";path="+d:"";f=f?";secure":"";c=0>c?"":0==c?";expires="+(new Date(1970,1,1)).toUTCString():";expires="+(new Date(v()+1E3*c)).toUTCString();this.b.cookie=a+"="+b+e+d+c+f};
l.get=function(a,b){for(var c=a+"=",d=(this.b.cookie||"").split(";"),e=0,f;e<d.length;e++){f=Da(d[e]);if(0==f.lastIndexOf(c,0))return f.substr(c.length);if(f==a)return""}return b};
l.remove=function(a,b,c){var d=p(this.get(a));this.set(a,"",0,b,c);return d};
l.isEmpty=function(){return!this.b.cookie};
l.clear=function(){for(var a=(this.b.cookie||"").split(";"),b=[],c=[],d,e,f=0;f<a.length;f++)e=Da(a[f]),d=e.indexOf("="),-1==d?(b.push(""),c.push(e)):(b.push(e.substring(0,d)),c.push(e.substring(d+1)));for(a=b.length-1;0<=a;a--)this.remove(b[a])};
var Kc=new Jc("undefined"==typeof document?null:document);Kc.f=3950;var Lc=G(J,"perf",I());G(Lc,"g",I());var Mc=G(Lc,"i",I());G(Lc,"r",[]);I();I();function Nc(a,b,c){b&&0<b.length&&(b=Oc(b),c&&0<c.length&&(b+="___"+Oc(c)),28<b.length&&(b=b.substr(0,28)+(b.length-28)),c=b,b=G(Mc,"_p",I()),G(b,c,I())[a]=(new Date).getTime(),b=Lc.r,"function"===typeof b?b(a,"_p",c):b.push([a,"_p",c]))}
function Oc(a){return a.join("__").replace(/\./g,"_").replace(/\-/g,"_").replace(/\,/g,"_")}
;var Pc=I(),Qc=[];function K(a){throw Error("Bad hint"+(a?": "+a:""));}
Qc.push(["jsl",function(a){for(var b in a)if(Object.prototype.hasOwnProperty.call(a,b)){var c=a[b];"object"==typeof c?J[b]=G(J,b,[]).concat(c):G(J,b,c)}if(b=a.u)a=G(J,"us",[]),a.push(b),(b=/^https:(.*)$/.exec(b))&&a.push("http:"+b[1])}]);
var Rc=/^(\/[a-zA-Z0-9_\-]+)+$/,Sc=[/\/amp\//,/\/amp$/,/^\/amp$/],Tc=/^[a-zA-Z0-9\-_\.,!]+$/,Uc=/^gapi\.loaded_[0-9]+$/,Vc=/^[a-zA-Z0-9,._-]+$/;function Wc(a,b,c,d){var e=a.split(";"),f=e.shift(),g=Pc[f],h=null;g?h=g(e,b,c,d):K("no hint processor for: "+f);h||K("failed to generate load url");b=h;c=b.match(Xc);(d=b.match(Yc))&&1===d.length&&Zc.test(b)&&c&&1===c.length||K("failed sanity: "+a);return h}
function $c(a,b,c,d){function e(a){return encodeURIComponent(a).replace(/%2C/g,",")}
a=bd(a);Uc.test(c)||K("invalid_callback");b=cd(b);d=d&&d.length?cd(d):null;return[encodeURIComponent(a.bb).replace(/%2C/g,",").replace(/%2F/g,"/"),"/k=",e(a.version),"/m=",e(b),d?"/exm="+e(d):"","/rt=j/sv=1/d=1/ed=1",a.ta?"/am="+e(a.ta):"",a.Aa?"/rs="+e(a.Aa):"",a.Ea?"/t="+e(a.Ea):"","/cb=",e(c)].join("")}
function bd(a){"/"!==a.charAt(0)&&K("relative path");for(var b=a.substring(1).split("/"),c=[];b.length;){a=b.shift();if(!a.length||0==a.indexOf("."))K("empty/relative directory");else if(0<a.indexOf("=")){b.unshift(a);break}c.push(a)}a={};for(var d=0,e=b.length;d<e;++d){var f=b[d].split("="),g=decodeURIComponent(f[0]),h=decodeURIComponent(f[1]);2==f.length&&g&&h&&(a[g]=a[g]||h)}b="/"+c.join("/");Rc.test(b)||K("invalid_prefix");c=0;for(d=Sc.length;c<d;++c)Sc[c].test(b)&&K("invalid_prefix");c=dd(a,
"k",!0);d=dd(a,"am");e=dd(a,"rs");a=dd(a,"t");return{bb:b,version:c,ta:d,Aa:e,Ea:a}}
function cd(a){for(var b=[],c=0,d=a.length;c<d;++c){var e=a[c].replace(/\./g,"_").replace(/-/g,"_");Vc.test(e)&&b.push(e)}return b.join(",")}
function dd(a,b,c){a=a[b];!a&&c&&K("missing: "+b);if(a){if(Tc.test(a))return a;K("invalid: "+b)}return null}
var Zc=/^https?:\/\/[a-z0-9_.-]+\.google\.com(:\d+)?\/[a-zA-Z0-9_.,!=\-\/]+$/,Yc=/\/cb=/g,Xc=/\/\//g;function ed(){var a=Dc();if(!a)throw Error("Bad hint");return a}
Pc.m=function(a,b,c,d){(a=a[0])||K("missing_hint");return"https://apis.google.com"+$c(a,b,c,d)};
var fd=decodeURI("%73cript"),gd=/^[-+_0-9\/A-Za-z]+={0,2}$/;function hd(a,b){for(var c=[],d=0;d<a.length;++d){var e=a[d];e&&0>Ac.call(b,e)&&c.push(e)}return c}
function id(){var a=J.nonce;if(void 0!==a)return a&&a===String(a)&&a.match(gd)?a:J.nonce=null;var b=G(J,"us",[]);if(!b||!b.length)return J.nonce=null;for(var c=wc.getElementsByTagName(fd),d=0,e=c.length;d<e;++d){var f=c[d];if(f.src&&(a=String(f.nonce||f.getAttribute("nonce")||"")||null)){for(var g=0,h=b.length;g<h&&b[g]!==f.src;++g);if(g!==h&&a&&a===String(a)&&a.match(gd))return J.nonce=a}}return null}
function jd(a){if("loading"!=wc.readyState)kd(a);else{var b=id(),c="";null!==b&&(c=' nonce="'+b+'"');wc.write("<"+fd+' src="'+encodeURI(a)+'"'+c+"></"+fd+">")}}
function kd(a){var b=wc.createElement(fd);b.setAttribute("src",a);a=id();null!==a&&b.setAttribute("nonce",a);b.async="true";(a=wc.getElementsByTagName(fd)[0])?a.parentNode.insertBefore(b,a):(wc.head||wc.body||wc.documentElement).appendChild(b)}
function ld(a,b){var c=b&&b._c;if(c)for(var d=0;d<Qc.length;d++){var e=Qc[d][0],f=Qc[d][1];f&&Object.prototype.hasOwnProperty.call(c,e)&&f(c[e],a,b)}}
function md(a,b,c){nd(function(){var c;c=b===Dc()?G(Cc,"_",I()):I();c=G(Fc(b),"_",c);a(c)},c)}
function od(a,b){var c=b||{};"function"==typeof b&&(c={},c.callback=b);ld(a,c);var d=a?a.split(":"):[],e=c.h||ed(),f=G(J,"ah",I());if(f["::"]&&d.length){for(var g=[],h=null;h=d.shift();){var k=h.split("."),k=f[h]||f[k[1]&&"ns:"+k[0]||""]||e,n=g.length&&g[g.length-1]||null,B=n;n&&n.hint==k||(B={hint:k,features:[]},g.push(B));B.features.push(h)}var H=g.length;if(1<H){var ga=c.callback;ga&&(c.callback=function(){0==--H&&ga()})}for(;d=g.shift();)pd(d.features,c,d.hint)}else pd(d||[],c,e)}
function pd(a,b,c){function d(a,b){if(H)return 0;vc.clearTimeout(B);ga.push.apply(ga,ca);var d=((Cc||{}).config||{}).update;d?d(f):f&&G(J,"cu",[]).push(f);if(b){Nc("me0",a,ba);try{md(b,c,n)}finally{Nc("me1",a,ba)}}return 1}
a=Bc(a)||[];var e=b.callback,f=b.config,g=b.timeout,h=b.ontimeout,k=b.onerror,n=void 0;"function"==typeof k&&(n=k);var B=null,H=!1;if(g&&!h||!g&&h)throw"Timeout requires both the timeout parameter and ontimeout parameter to be set";var k=G(Fc(c),"r",[]).sort(),ga=G(Fc(c),"L",[]).sort(),ba=[].concat(k);0<g&&(B=vc.setTimeout(function(){H=!0;h()},g));
var ca=hd(a,ga);if(ca.length){var ca=hd(a,k),na=G(J,"CP",[]),oa=na.length;na[oa]=function(a){function b(){var a=na[oa+1];a&&a()}
function c(b){na[oa]=null;d(ca,a)&&Ec(function(){e&&e();b()})}
if(!a)return 0;Nc("ml1",ca,ba);0<oa&&na[oa-1]?na[oa]=function(){c(b)}:c(b)};
if(ca.length){var ad="loaded_"+J.I++;Cc[ad]=function(a){na[oa](a);Cc[ad]=null};
a=Wc(c,ca,"gapi."+ad,k);k.push.apply(k,ca);Nc("ml0",ca,ba);b.sync||vc.___gapisync?jd(a):kd(a)}else na[oa](yc)}else d(ca)&&e&&e()}
function nd(a,b){if(J.hee&&0<J.hel)try{return a()}catch(c){b&&b(c),J.hel--,od("debug_error",function(){try{window.___jsl.hefn(c)}catch(d){throw c;}})}else try{return a()}catch(c){throw b&&b(c),c;
}}
Cc.load=function(a,b){return nd(function(){return od(a,b)})};function qd(a,b,c){this.i=c;this.g=a;this.j=b;this.f=0;this.b=null}
qd.prototype.get=function(){var a;0<this.f?(this.f--,a=this.b,this.b=a.next,a.next=null):a=this.g();return a};
function rd(a,b){a.j(b);a.f<a.i&&(a.f++,b.next=a.b,a.b=b)}
;function sd(a){m.setTimeout(function(){throw a;},0)}
var td;
function ud(){var a=m.MessageChannel;"undefined"===typeof a&&"undefined"!==typeof window&&window.postMessage&&window.addEventListener&&!C("Presto")&&(a=function(){var a=document.createElement("IFRAME");a.style.display="none";a.src="";document.documentElement.appendChild(a);var b=a.contentWindow,a=b.document;a.open();a.write("");a.close();var c="callImmediate"+Math.random(),d="file:"==b.location.protocol?"*":b.location.protocol+"//"+b.location.host,a=u(function(a){if(("*"==d||a.origin==d)&&a.data==
c)this.port1.onmessage()},this);
b.addEventListener("message",a,!1);this.port1={};this.port2={postMessage:function(){b.postMessage(c,d)}}});
if("undefined"!==typeof a&&!C("Trident")&&!C("MSIE")){var b=new a,c={},d=c;b.port1.onmessage=function(){if(p(c.next)){c=c.next;var a=c.ua;c.ua=null;a()}};
return function(a){d.next={ua:a};d=d.next;b.port2.postMessage(0)}}return"undefined"!==typeof document&&"onreadystatechange"in document.createElement("SCRIPT")?function(a){var b=document.createElement("SCRIPT");
b.onreadystatechange=function(){b.onreadystatechange=null;b.parentNode.removeChild(b);b=null;a();a=null};
document.documentElement.appendChild(b)}:function(a){m.setTimeout(a,0)}}
;function vd(){this.f=this.b=null}
var xd=new qd(function(){return new wd},function(a){a.reset()},100);
vd.prototype.remove=function(){var a=null;this.b&&(a=this.b,this.b=this.b.next,this.b||(this.f=null),a.next=null);return a};
function wd(){this.next=this.scope=this.b=null}
wd.prototype.set=function(a,b){this.b=a;this.scope=b;this.next=null};
wd.prototype.reset=function(){this.next=this.scope=this.b=null};function yd(a,b){zd||Ad();Bd||(zd(),Bd=!0);var c=Cd,d=xd.get();d.set(a,b);c.f?c.f.next=d:c.b=d;c.f=d}
var zd;function Ad(){if(-1!=String(m.Promise).indexOf("[native code]")){var a=m.Promise.resolve(void 0);zd=function(){a.then(Dd)}}else zd=function(){var a=Dd;
!ta(m.setImmediate)||m.Window&&m.Window.prototype&&!C("Edge")&&m.Window.prototype.setImmediate==m.setImmediate?(td||(td=ud()),td(a)):m.setImmediate(a)}}
var Bd=!1,Cd=new vd;function Dd(){for(var a;a=Cd.remove();){try{a.b.call(a.scope)}catch(b){sd(b)}rd(xd,a)}Bd=!1}
;var Ed="StopIteration"in m?m.StopIteration:{message:"StopIteration",stack:""};function Fd(){}
Fd.prototype.next=function(){throw Ed;};
Fd.prototype.ca=function(){return this};
function Gd(a){if(a instanceof Fd)return a;if("function"==typeof a.ca)return a.ca(!1);if(sa(a)){var b=0,c=new Fd;c.next=function(){for(;;){if(b>=a.length)throw Ed;if(b in a)return a[b++];b++}};
return c}throw Error("Not implemented");}
function Hd(a,b){if(sa(a))try{z(a,b,void 0)}catch(c){if(c!==Ed)throw c;}else{a=Gd(a);try{for(;;)b.call(void 0,a.next(),void 0,a)}catch(c){if(c!==Ed)throw c;}}}
function Id(a){if(sa(a))return Ka(a);a=Gd(a);var b=[];Hd(a,function(a){b.push(a)});
return b}
;function L(){this.f=this.f;this.G=this.G}
L.prototype.f=!1;L.prototype.dispose=function(){this.f||(this.f=!0,this.o())};
function Jd(a,b){a.f?p(void 0)?b.call(void 0):b():(a.G||(a.G=[]),a.G.push(p(void 0)?u(b,void 0):b))}
L.prototype.o=function(){if(this.G)for(;this.G.length;)this.G.shift()()};
function Kd(a){a&&"function"==typeof a.dispose&&a.dispose()}
function Ld(a){for(var b=0,c=arguments.length;b<c;++b){var d=arguments[b];sa(d)?Ld.apply(null,d):Kd(d)}}
;D&&E("9");!qb||E("528");pb&&E("1.9b")||D&&E("8")||nb&&E("9.5")||qb&&E("528");pb&&!E("8")||D&&E("9");function Md(a){return/^\s*$/.test(a)?!1:/^[\],:{}\s\u2028\u2029]*$/.test(a.replace(/\\["\\\/bfnrtu]/g,"@").replace(/(?:"[^"\\\n\r\u2028\u2029\x00-\x08\x0a-\x1f]*"|true|false|null|-?\d+(?:\.\d*)?(?:[eE][+\-]?\d+)?)[\s\u2028\u2029]*(?=:|,|]|}|$)/g,"]").replace(/(?:^|:|,)(?:[\s\u2028\u2029]*\[)+/g,""))}
function Nd(a){a=String(a);if(Md(a))try{return eval("("+a+")")}catch(b){}throw Error("Invalid JSON string: "+a);}
function Od(a){return eval("("+a+")")}
function Pd(a){var b=[];Qd(new Rd,a,b);return b.join("")}
function Rd(){}
function Qd(a,b,c){if(null==b)c.push("null");else{if("object"==typeof b){if(ra(b)){var d=b;b=d.length;c.push("[");for(var e="",f=0;f<b;f++)c.push(e),e=d[f],Qd(a,e,c),e=",";c.push("]");return}if(b instanceof String||b instanceof Number||b instanceof Boolean)b=b.valueOf();else{c.push("{");f="";for(d in b)Object.prototype.hasOwnProperty.call(b,d)&&(e=b[d],"function"!=typeof e&&(c.push(f),Sd(d,c),c.push(":"),Qd(a,e,c),f=","));c.push("}");return}}switch(typeof b){case "string":Sd(b,c);break;case "number":c.push(isFinite(b)&&
!isNaN(b)?String(b):"null");break;case "boolean":c.push(String(b));break;case "function":c.push("null");break;default:throw Error("Unknown type: "+typeof b);}}}
var Td={'"':'\\"',"\\":"\\\\","/":"\\/","\b":"\\b","\f":"\\f","\n":"\\n","\r":"\\r","\t":"\\t","\x0B":"\\u000b"},Ud=/\uffff/.test("\uffff")?/[\\\"\x00-\x1f\x7f-\uffff]/g:/[\\\"\x00-\x1f\x7f-\xff]/g;function Sd(a,b){b.push('"',a.replace(Ud,function(a){var b=Td[a];b||(b="\\u"+(a.charCodeAt(0)|65536).toString(16).substr(1),Td[a]=b);return b}),'"')}
;function Vd(a){a.prototype.then=a.prototype.then;a.prototype.$goog_Thenable=!0}
;function M(a,b){this.b=0;this.w=void 0;this.i=this.f=this.g=null;this.j=this.l=!1;if(a!=ma)try{var c=this;a.call(b,function(a){Wd(c,2,a)},function(a){Wd(c,3,a)})}catch(d){Wd(this,3,d)}}
function Xd(){this.next=this.context=this.f=this.g=this.b=null;this.i=!1}
Xd.prototype.reset=function(){this.context=this.f=this.g=this.b=null;this.i=!1};
var Yd=new qd(function(){return new Xd},function(a){a.reset()},100);
function Zd(a,b,c){var d=Yd.get();d.g=a;d.f=b;d.context=c;return d}
function $d(a){if(a instanceof M)return a;var b=new M(ma);Wd(b,2,a);return b}
function ae(a){return new M(function(b,c){c(a)})}
M.prototype.then=function(a,b,c){return be(this,ta(a)?a:null,ta(b)?b:null,c)};
Vd(M);M.prototype.cancel=function(a){0==this.b&&yd(function(){var b=new ce(a);de(this,b)},this)};
function de(a,b){if(0==a.b)if(a.g){var c=a.g;if(c.f){for(var d=0,e=null,f=null,g=c.f;g&&(g.i||(d++,g.b==a&&(e=g),!(e&&1<d)));g=g.next)e||(f=g);e&&(0==c.b&&1==d?de(c,b):(f?(d=f,d.next==c.i&&(c.i=d),d.next=d.next.next):ee(c),fe(c,e,3,b)))}a.g=null}else Wd(a,3,b)}
function ge(a,b){a.f||2!=a.b&&3!=a.b||he(a);a.i?a.i.next=b:a.f=b;a.i=b}
function be(a,b,c,d){var e=Zd(null,null,null);e.b=new M(function(a,g){e.g=b?function(c){try{var e=b.call(d,c);a(e)}catch(n){g(n)}}:a;
e.f=c?function(b){try{var e=c.call(d,b);!p(e)&&b instanceof ce?g(b):a(e)}catch(n){g(n)}}:g});
e.b.g=a;ge(a,e);return e.b}
M.prototype.C=function(a){this.b=0;Wd(this,2,a)};
M.prototype.G=function(a){this.b=0;Wd(this,3,a)};
function Wd(a,b,c){if(0==a.b){a===c&&(b=3,c=new TypeError("Promise cannot resolve to itself"));a.b=1;var d;a:{var e=c,f=a.C,g=a.G;if(e instanceof M)ge(e,Zd(f||ma,g||null,a)),d=!0;else{var h;if(e)try{h=!!e.$goog_Thenable}catch(n){h=!1}else h=!1;if(h)e.then(f,g,a),d=!0;else{if(ua(e))try{var k=e.then;if(ta(k)){ie(e,k,f,g,a);d=!0;break a}}catch(n){g.call(a,n);d=!0;break a}d=!1}}}d||(a.w=c,a.b=b,a.g=null,he(a),3!=b||c instanceof ce||je(a,c))}}
function ie(a,b,c,d,e){function f(a){h||(h=!0,d.call(e,a))}
function g(a){h||(h=!0,c.call(e,a))}
var h=!1;try{b.call(a,g,f)}catch(k){f(k)}}
function he(a){a.l||(a.l=!0,yd(a.D,a))}
function ee(a){var b=null;a.f&&(b=a.f,a.f=b.next,b.next=null);a.f||(a.i=null);return b}
M.prototype.D=function(){for(var a;a=ee(this);)fe(this,a,this.b,this.w);this.l=!1};
function fe(a,b,c,d){if(3==c&&b.f&&!b.i)for(;a&&a.j;a=a.g)a.j=!1;if(b.b)b.b.g=null,ke(b,c,d);else try{b.i?b.g.call(b.context):ke(b,c,d)}catch(e){le.call(null,e)}rd(Yd,b)}
function ke(a,b,c){2==b?a.g.call(a.context,c):a.f&&a.f.call(a.context,c)}
function je(a,b){a.j=!0;yd(function(){a.j&&le.call(null,b)})}
var le=sd;function ce(a){y.call(this,a)}
w(ce,y);ce.prototype.name="cancel";function N(a){L.call(this);this.l=1;this.i=[];this.j=0;this.b=[];this.g={};this.w=!!a}
w(N,L);l=N.prototype;l.subscribe=function(a,b,c){var d=this.g[a];d||(d=this.g[a]=[]);var e=this.l;this.b[e]=a;this.b[e+1]=b;this.b[e+2]=c;this.l=e+3;d.push(e);return e};
function me(a,b,c,d){if(b=a.g[b]){var e=a.b;(b=Ia(b,function(a){return e[a+1]==c&&e[a+2]==d}))&&a.L(b)}}
l.L=function(a){var b=this.b[a];if(b){var c=this.g[b];0!=this.j?(this.i.push(a),this.b[a+1]=ma):(c&&Ja(c,a),delete this.b[a],delete this.b[a+1],delete this.b[a+2])}return!!b};
l.V=function(a,b){var c=this.g[a];if(c){for(var d=Array(arguments.length-1),e=1,f=arguments.length;e<f;e++)d[e-1]=arguments[e];if(this.w)for(e=0;e<c.length;e++){var g=c[e];ne(this.b[g+1],this.b[g+2],d)}else{this.j++;try{for(e=0,f=c.length;e<f;e++)g=c[e],this.b[g+1].apply(this.b[g+2],d)}finally{if(this.j--,0<this.i.length&&0==this.j)for(;c=this.i.pop();)this.L(c)}}return 0!=e}return!1};
function ne(a,b,c){yd(function(){a.apply(b,c)})}
l.clear=function(a){if(a){var b=this.g[a];b&&(z(b,this.L,this),delete this.g[a])}else this.b.length=0,this.g={}};
l.o=function(){N.B.o.call(this);this.clear();this.i.length=0};function oe(a){this.b=a}
oe.prototype.set=function(a,b){p(b)?this.b.set(a,Pd(b)):this.b.remove(a)};
oe.prototype.get=function(a){var b;try{b=this.b.get(a)}catch(c){return}if(null!==b)try{return Nd(b)}catch(c){throw"Storage: Invalid value was encountered";}};
oe.prototype.remove=function(a){this.b.remove(a)};function pe(a){this.b=a}
w(pe,oe);function qe(a){this.data=a}
function re(a){return!p(a)||a instanceof qe?a:new qe(a)}
pe.prototype.set=function(a,b){pe.B.set.call(this,a,re(b))};
pe.prototype.f=function(a){a=pe.B.get.call(this,a);if(!p(a)||a instanceof Object)return a;throw"Storage: Invalid value was encountered";};
pe.prototype.get=function(a){if(a=this.f(a)){if(a=a.data,!p(a))throw"Storage: Invalid value was encountered";}else a=void 0;return a};function se(a){this.b=a}
w(se,pe);se.prototype.set=function(a,b,c){if(b=re(b)){if(c){if(c<v()){se.prototype.remove.call(this,a);return}b.expiration=c}b.creation=v()}se.B.set.call(this,a,b)};
se.prototype.f=function(a,b){var c=se.B.f.call(this,a);if(c){var d;if(d=!b){d=c.creation;var e=c.expiration;d=!!e&&e<v()||!!d&&d>v()}if(d)se.prototype.remove.call(this,a);else return c}};function te(a){this.b=a}
w(te,se);function ue(){}
;function ve(){}
w(ve,ue);ve.prototype.clear=function(){var a=Id(this.ca(!0)),b=this;z(a,function(a){b.remove(a)})};function we(a){this.b=a}
w(we,ve);l=we.prototype;l.isAvailable=function(){if(!this.b)return!1;try{return this.b.setItem("__sak","1"),this.b.removeItem("__sak"),!0}catch(a){return!1}};
l.set=function(a,b){try{this.b.setItem(a,b)}catch(c){if(0==this.b.length)throw"Storage mechanism: Storage disabled";throw"Storage mechanism: Quota exceeded";}};
l.get=function(a){a=this.b.getItem(a);if(!t(a)&&null!==a)throw"Storage mechanism: Invalid value was encountered";return a};
l.remove=function(a){this.b.removeItem(a)};
l.ca=function(a){var b=0,c=this.b,d=new Fd;d.next=function(){if(b>=c.length)throw Ed;var d=c.key(b++);if(a)return d;d=c.getItem(d);if(!t(d))throw"Storage mechanism: Invalid value was encountered";return d};
return d};
l.clear=function(){this.b.clear()};
l.key=function(a){return this.b.key(a)};function xe(){var a=null;try{a=window.localStorage||null}catch(b){}this.b=a}
w(xe,we);function ye(){var a=null;try{a=window.sessionStorage||null}catch(b){}this.b=a}
w(ye,we);var ze=window.performance&&window.performance.timing&&window.performance.now?function(){return window.performance.timing.navigationStart+window.performance.now()}:function(){return(new Date).getTime()},Ae="Microsoft Internet Explorer"==navigator.appName;
function Be(a,b){if(1<b.length)a[b[0]]=b[1];else{var c=b[0],d;for(d in c)a[d]=c[d]}}
;var Ce=window.yt&&window.yt.config_||window.ytcfg&&window.ytcfg.data_||{};q("yt.config_",Ce,void 0);function O(a){Be(Ce,arguments)}
function P(a,b){return a in Ce?Ce[a]:b}
;var De={};function Ee(a){return De[a]||(De[a]=String(a).replace(/\-([a-z])/g,function(a,c){return c.toUpperCase()}))}
function Fe(a,b){return a?a.dataset?a.dataset[Ee(b)]:a.getAttribute("data-"+b):null}
function Ge(a){a&&(a.dataset?a.dataset[Ee("loaded")]="true":a.setAttribute("data-loaded","true"))}
;function Q(a,b){var c=r("yt.logging.errors.log");c?c(a,b,void 0,void 0,void 0):(c=P("ERRORS",[]),c.push([a,b,void 0,void 0,void 0]),O("ERRORS",c))}
function He(a){return a&&window.yterr?function(){try{return a.apply(this,arguments)}catch(b){Q(b)}}:a}
;function R(a,b){ta(a)&&(a=He(a));return window.setTimeout(a,b)}
;var Ie=r("yt.pubsub.instance_")||new N;N.prototype.subscribe=N.prototype.subscribe;N.prototype.unsubscribeByKey=N.prototype.L;N.prototype.publish=N.prototype.V;N.prototype.clear=N.prototype.clear;q("yt.pubsub.instance_",Ie,void 0);var Je=r("yt.pubsub.subscribedKeys_")||{};q("yt.pubsub.subscribedKeys_",Je,void 0);var Ke=r("yt.pubsub.topicToKeys_")||{};q("yt.pubsub.topicToKeys_",Ke,void 0);var Le=r("yt.pubsub.isSynchronous_")||{};q("yt.pubsub.isSynchronous_",Le,void 0);
var Me=r("yt.pubsub.skipSubId_")||null;q("yt.pubsub.skipSubId_",Me,void 0);function Ne(a,b){var c=Oe();if(c){var d=c.subscribe(a,function(){if(!Me||Me!=d){var c=arguments,f;f=function(){Je[d]&&b.apply(window,c)};
try{Le[a]?f():R(f,0)}catch(g){Q(g)}}},void 0);
Je[d]=!0;Ke[a]||(Ke[a]=[]);Ke[a].push(d);return d}return 0}
function Pe(a){var b=Oe();b&&("number"==typeof a?a=[a]:"string"==typeof a&&(a=[parseInt(a,10)]),z(a,function(a){b.unsubscribeByKey(a);delete Je[a]}))}
function Qe(a,b){var c=Oe();return c?c.publish.apply(c,arguments):!1}
function Re(a){Ke[a]&&(a=Ke[a],z(a,function(a){Je[a]&&delete Je[a]}),a.length=0)}
function Se(a){var b=Oe();if(b)if(b.clear(a),a)Re(a);else for(var c in Ke)Re(c)}
function Oe(){return r("yt.pubsub.instance_")}
;var Te=/\.vflset|-vfl[a-zA-Z0-9_+=-]+/,Ue=/-[a-zA-Z]{2,3}_[a-zA-Z]{2,3}(?=(\/|$))/;function Ve(a,b){var c=We(a),d=document.getElementById(c),e=d&&Fe(d,"loaded"),f=d&&!e;if(e)b&&b();else{if(b){var e=Ne(c,b),g=""+va(b);Xe[g]=e}f||(d=Ye(a,c,function(){Fe(d,"loaded")||(Ge(d),Qe(c),R(Aa(Se,c),0))}))}}
function Ye(a,b,c){var d=document.createElement("script");d.id=b;d.onload=function(){c&&setTimeout(c,0)};
d.onreadystatechange=function(){switch(d.readyState){case "loaded":case "complete":d.onload()}};
d.src=a;a=document.getElementsByTagName("head")[0]||document.body;a.insertBefore(d,a.firstChild);return d}
function Ze(a,b){if(a&&b){var c=""+va(b);(c=Xe[c])&&Pe(c)}}
function We(a){var b=document.createElement("a");Wb(b,a);a=b.href.replace(/^[a-zA-Z]+:\/\//,"//");return"js-"+Fa(a)}
var Xe={};function $e(a,b){if(window.spf){var c="";if(a){var d=a.indexOf("jsbin/"),e=a.lastIndexOf(".js"),f=d+6;-1<d&&-1<e&&e>f&&(c=a.substring(f,e),c=c.replace(Te,""),c=c.replace(Ue,""),c=c.replace("debug-",""),c=c.replace("tracing-",""))}spf.script.load(a,c,b)}else Ve(a,b)}
;var af=null;function bf(){var a=P("BG_I",null),b=P("BG_IU",null),c=P("BG_P",void 0);b?$e(b,function(){af=new botguard.bg(c)}):a&&(eval(a),af=new botguard.bg(c))}
function cf(){return null!=af}
function df(){return af?af.invoke():null}
;var ef=null;"undefined"!=typeof XMLHttpRequest?ef=function(){return new XMLHttpRequest}:"undefined"!=typeof ActiveXObject&&(ef=function(){return new ActiveXObject("Microsoft.XMLHTTP")});
function ff(a){switch(a&&"status"in a?a.status:-1){case 200:case 201:case 202:case 203:case 204:case 205:case 206:case 304:return!0;default:return!1}}
;function gf(a){"?"==a.charAt(0)&&(a=a.substr(1));a=a.split("&");for(var b={},c=0,d=a.length;c<d;c++){var e=a[c].split("=");if(1==e.length&&e[0]||2==e.length){var f=decodeURIComponent((e[0]||"").replace(/\+/g," ")),e=decodeURIComponent((e[1]||"").replace(/\+/g," "));f in b?ra(b[f])?La(b[f],e):b[f]=[b[f],e]:b[f]=e}}return b}
function hf(a,b){var c=a.split("#",2);a=c[0];var c=1<c.length?"#"+c[1]:"",d=a.split("?",2);a=d[0];var d=gf(d[1]||""),e;for(e in b)d[e]=b[e];return fc(ic([a],d))+c}
function jf(a){a=ic([],a);a[0]="";return a.join("")}
;var kf={"X-Goog-Visitor-Id":"SANDBOXED_VISITOR_ID","X-YouTube-Client-Name":"INNERTUBE_CONTEXT_CLIENT_NAME","X-YouTube-Client-Version":"INNERTUBE_CONTEXT_CLIENT_VERSION","X-Youtube-Identity-Token":"ID_TOKEN","X-YouTube-Page-CL":"PAGE_CL","X-YouTube-Page-Label":"PAGE_BUILD_LABEL","X-YouTube-Variants-Checksum":"VARIANTS_CHECKSUM"};
function lf(a,b){b=b||{};var c=void 0;c=window.location.href;var d=F(a)[1]||null,e=ec(F(a)[3]||null);d&&e?(d=c,c=F(a),d=F(d),c=c[3]==d[3]&&c[1]==d[1]&&c[4]==d[4]):c=e?ec(F(c)[3]||null)==e&&(Number(F(c)[4]||null)||null)==(Number(F(a)[4]||null)||null):!0;for(var f in kf){if((e=d=P(kf[f]))&&!(e=c)){var g=a,e=f,h=P("CORS_HEADER_WHITELIST")||{};e=(g=ec(F(g)[3]||null))?(h=h[g])?0<=Ga(h,e):!1:!0}e&&(b[f]=d)}return b}
function mf(a,b){var c=P("XSRF_FIELD_NAME",void 0),d;b.headers&&(d=b.headers["Content-Type"]);return!b.sb&&(!ec(F(a)[3]||null)||b.withCredentials||ec(F(a)[3]||null)==document.location.hostname)&&"POST"==b.method&&(!d||"application/x-www-form-urlencoded"==d)&&!(b.A&&b.A[c])}
function nf(a,b){var c=b.format||"JSON";b.Na&&(a=document.location.protocol+"//"+document.location.hostname+(document.location.port?":"+document.location.port:"")+a);var d=P("XSRF_FIELD_NAME",void 0),e=P("XSRF_TOKEN",void 0),f=b.pa;f&&(f[d]&&delete f[d],a=hf(a,f||{}));var g=b.postBody||"",f=b.A;mf(a,b)&&(f||(f={}),f[d]=e);f&&t(g)&&(d=gf(g),kb(d,f),g=b.ya&&"JSON"==b.ya?JSON.stringify(d):jf(d));var h=!1,k,n=of(a,function(a){if(!h){h=!0;k&&window.clearTimeout(k);var d=ff(a),e=null;if(d||400<=a.status&&
500>a.status)e=pf(c,a,b.rb);if(d)a:if(204==a.status)d=!0;else{switch(c){case "XML":d=0==parseInt(e&&e.return_code,10);break a;case "RAW":d=!0;break a}d=!!e}var e=e||{},f=b.context||m;d?b.F&&b.F.call(f,a,e):b.onError&&b.onError.call(f,a,e);b.oa&&b.oa.call(f,a,e)}},b.method,g,b.headers,b.responseType,b.withCredentials);
b.O&&0<b.timeout&&(k=R(function(){h||(h=!0,n.abort(),window.clearTimeout(k),b.O.call(b.context||m,n))},b.timeout))}
function pf(a,b,c){var d=null;switch(a){case "JSON":a=b.responseText;b=b.getResponseHeader("Content-Type")||"";a&&0<=b.indexOf("json")&&(d=Od(a));break;case "XML":if(b=(b=b.responseXML)?qf(b):null)d={},z(b.getElementsByTagName("*"),function(a){d[a.tagName]=rf(a)})}c&&sf(d);
return d}
function sf(a){if(ua(a))for(var b in a){var c;(c="html_content"==b)||(c=b.length-5,c=0<=c&&b.indexOf("_html",c)==c);if(c){c=b;var d;d=Vb(a[b]);a[c]=d}else sf(a[b])}}
function qf(a){return a?(a=("responseXML"in a?a.responseXML:a).getElementsByTagName("root"))&&0<a.length?a[0]:null:null}
function rf(a){var b="";z(a.childNodes,function(a){b+=a.nodeValue});
return b}
function tf(a,b){b.method="POST";b.A||(b.A={});nf(a,b)}
function of(a,b,c,d,e,f,g){function h(){4==(k&&"readyState"in k?k.readyState:0)&&b&&He(b)(k)}
c=void 0===c?"GET":c;d=void 0===d?"":d;var k=ef&&ef();if(!("open"in k))return null;"onloadend"in k?k.addEventListener("loadend",h,!1):k.onreadystatechange=h;k.open(c,a,!0);f&&(k.responseType=f);g&&(k.withCredentials=!0);c="POST"==c;if(e=lf(a,e))for(var n in e)k.setRequestHeader(n,e[n]),"content-type"==n.toLowerCase()&&(c=!1);c&&k.setRequestHeader("Content-Type","application/x-www-form-urlencoded");k.send(d);return k}
;function uf(a,b,c,d,e){c={name:c||P("INNERTUBE_CONTEXT_CLIENT_NAME",1),version:d||P("INNERTUBE_CONTEXT_CLIENT_VERSION",void 0)};e=window&&window.yterr||e||!1;if(a&&e&&!(5<=vf)){e=a.stacktrace;d=a.columnNumber;var f=r("window.location.href");if(t(a))a={message:a,name:"Unknown error",lineNumber:"Not available",fileName:f,stack:"Not available"};else{var g,h,k=!1;try{g=a.lineNumber||a.line||"Not available"}catch(H){g="Not available",k=!0}try{h=a.fileName||a.filename||a.sourceURL||m.$googDebugFname||f}catch(H){h=
"Not available",k=!0}a=!k&&a.lineNumber&&a.fileName&&a.stack&&a.message&&a.name?a:{message:a.message||"Not available",name:a.name||"UnknownError",lineNumber:g,fileName:h,stack:a.stack||"Not available"}}e=e||a.stack;g=a.lineNumber.toString();isNaN(g)||isNaN(d)||(g=g+":"+d);if(!(wf[a.message]||0<=e.indexOf("/YouTubeCenter.js")||0<=e.indexOf("/mytube.js"))){h=a.fileName;b={pa:{a:"logerror",t:"jserror",type:a.name,msg:a.message.substr(0,1E3),line:g,level:b||"ERROR"},A:{url:P("PAGE_NAME",window.location.href),
file:h},method:"POST"};e&&(b.A.stack=e);for(var n in c)b.A["client."+n]=c[n];if(n=P("LATEST_ECATCHER_SERVICE_TRACKING_PARAMS",void 0))for(var B in n)b.A[B]=n[B];nf("/error_204",b);wf[a.message]=!0;vf++}}}
var wf={},vf=0;var xf=window.yt&&window.yt.msgs_||window.ytcfg&&window.ytcfg.msgs||{};q("yt.msgs_",xf,void 0);function yf(a){Be(xf,arguments)}
;function zf(a,b,c){isNaN(c)&&(c=void 0);var d=r("yt.scheduler.instance.addJob");return d?d(a,b,c):void 0===c?(a(),NaN):R(a,c||0)}
function Af(a,b){return zf(a,1,b)}
;var Bf=[],Cf=!1;function Df(){function a(){Cf=!0;"google_ad_status"in window?O("DCLKSTAT",1):O("DCLKSTAT",2)}
$e("//static.doubleclick.net/instream/ad_status.js",a);Bf.push(Af(function(){Cf||"google_ad_status"in window||(Ze("//static.doubleclick.net/instream/ad_status.js",a),O("DCLKSTAT",3))},5E3))}
function Ef(){return parseInt(P("DCLKSTAT",0),10)}
;function Ff(a){a=a||{};this.url=a.url||"";this.urlV9As2=a.url_v9as2||"";this.args=a.args||ib(Gf);this.assets=a.assets||{};this.attrs=a.attrs||ib(Hf);this.params=a.params||ib(If);this.minVersion=a.min_version||"8.0.0";this.fallback=a.fallback||null;this.fallbackMessage=a.fallbackMessage||null;this.html5=!!a.html5;this.disable=a.disable||{};this.loaded=!!a.loaded;this.messages=a.messages||{}}
var Gf={enablejsapi:1},Hf={},If={allowscriptaccess:"always",allowfullscreen:"true",bgcolor:"#000000"};function Jf(a){a instanceof Ff||(a=new Ff(a));return a}
function Kf(a){var b=new Ff,c;for(c in a)if(a.hasOwnProperty(c)){var d=a[c];b[c]="object"==qa(d)?ib(d):d}return b}
;var Lf=0,Mf=r("yt.dom.dom.getNextId")||function(){return++Lf};
q("yt.dom.dom.getNextId",Mf,void 0);var Nf={stopImmediatePropagation:1,stopPropagation:1,preventMouseEvent:1,preventManipulation:1,preventDefault:1,layerX:1,layerY:1,screenX:1,screenY:1,scale:1,rotation:1,webkitMovementX:1,webkitMovementY:1};
function Of(a){this.type="";this.state=this.source=this.data=this.currentTarget=this.relatedTarget=this.target=null;this.charCode=this.keyCode=0;this.shiftKey=this.ctrlKey=this.altKey=!1;this.clientY=this.clientX=0;this.changedTouches=this.touches=null;if(a=a||window.event){this.event=a;for(var b in a)b in Nf||(this[b]=a[b]);(b=a.target||a.srcElement)&&3==b.nodeType&&(b=b.parentNode);this.target=b;if(b=a.relatedTarget)try{b=b.nodeName?b:null}catch(c){b=null}else"mouseover"==this.type?b=a.fromElement:
"mouseout"==this.type&&(b=a.toElement);this.relatedTarget=b;this.clientX=void 0!=a.clientX?a.clientX:a.pageX;this.clientY=void 0!=a.clientY?a.clientY:a.pageY;this.keyCode=a.keyCode?a.keyCode:a.which;this.charCode=a.charCode||("keypress"==this.type?this.keyCode:0);this.altKey=a.altKey;this.ctrlKey=a.ctrlKey;this.shiftKey=a.shiftKey}}
Of.prototype.preventDefault=function(){this.event&&(this.event.returnValue=!1,this.event.preventDefault&&this.event.preventDefault())};
Of.prototype.stopPropagation=function(){this.event&&(this.event.cancelBubble=!0,this.event.stopPropagation&&this.event.stopPropagation())};
Of.prototype.stopImmediatePropagation=function(){this.event&&(this.event.cancelBubble=!0,this.event.stopImmediatePropagation&&this.event.stopImmediatePropagation())};var eb=r("ytEventsEventsListeners")||{};q("ytEventsEventsListeners",eb,void 0);var Pf=r("ytEventsEventsCounter")||{count:0};q("ytEventsEventsCounter",Pf,void 0);function Qf(a,b,c,d){d=void 0===d?!1:d;a.addEventListener&&("mouseenter"!=b||"onmouseenter"in document?"mouseleave"!=b||"onmouseenter"in document?"mousewheel"==b&&"MozBoxSizing"in document.documentElement.style&&(b="MozMousePixelScroll"):b="mouseout":b="mouseover");return db(function(e){return e[0]==a&&e[1]==b&&e[2]==c&&e[4]==!!d})}
function Rf(a,b,c){var d;d=void 0===d?!1:d;if(!a||!a.addEventListener&&!a.attachEvent)return"";var e=Qf(a,b,c,d);if(e)return e;var e=++Pf.count+"",f=!("mouseenter"!=b&&"mouseleave"!=b||!a.addEventListener||"onmouseenter"in document),g;g=f?function(d){d=new Of(d);if(!$b(d.relatedTarget,function(b){return b==a}))return d.currentTarget=a,d.type=b,c.call(a,d)}:function(b){b=new Of(b);
b.currentTarget=a;return c.call(a,b)};
g=He(g);a.addEventListener?("mouseenter"==b&&f?b="mouseover":"mouseleave"==b&&f?b="mouseout":"mousewheel"==b&&"MozBoxSizing"in document.documentElement.style&&(b="MozMousePixelScroll"),a.addEventListener(b,g,d)):a.attachEvent("on"+b,g);eb[e]=[a,b,c,g,d];return e}
function Sf(a){a&&("string"==typeof a&&(a=[a]),z(a,function(a){if(a in eb){var b=eb[a],d=b[0],e=b[1],f=b[3],b=b[4];d.removeEventListener?d.removeEventListener(e,f,b):d.detachEvent&&d.detachEvent("on"+e,f);delete eb[a]}}))}
;function Tf(){this.g=this.f=this.b=0;this.i="";var a=r("window.navigator.plugins"),b=r("window.navigator.mimeTypes"),a=a&&a["Shockwave Flash"],b=b&&b["application/x-shockwave-flash"],b=a&&b&&b.enabledPlugin&&a.description||"";if(a=b){var c=a.indexOf("Shockwave Flash");0<=c&&(a=a.substr(c+15));for(var c=a.split(" "),d="",a="",e=0,f=c.length;e<f;e++)if(d)if(a)break;else a=c[e];else d=c[e];d=d.split(".");c=parseInt(d[0],10)||0;d=parseInt(d[1],10)||0;e=0;if("r"==a.charAt(0)||"d"==a.charAt(0))e=parseInt(a.substr(1),
10)||0;a=[c,d,e]}else a=[0,0,0];this.i=b;b=a;this.b=b[0];this.f=b[1];this.g=b[2];if(0>=this.b){var g,h,k,n;if(Ae)try{g=new ActiveXObject("ShockwaveFlash.ShockwaveFlash")}catch(B){g=null}else k=document.body,n=document.createElement("object"),n.setAttribute("type","application/x-shockwave-flash"),g=k.appendChild(n);if(g&&"GetVariable"in g)try{h=g.GetVariable("$version")}catch(B){h=""}k&&n&&k.removeChild(n);(g=h||"")?(g=g.split(" ")[1].split(","),g=[parseInt(g[0],10)||0,parseInt(g[1],10)||0,parseInt(g[2],
10)||0]):g=[0,0,0];this.b=g[0];this.f=g[1];this.g=g[2]}}
pa(Tf);function Uf(a,b,c,d){b="string"==typeof b?b.split("."):[b,c,d];b[0]=parseInt(b[0],10)||0;b[1]=parseInt(b[1],10)||0;b[2]=parseInt(b[2],10)||0;return a.b>b[0]||a.b==b[0]&&a.f>b[1]||a.b==b[0]&&a.f==b[1]&&a.g>=b[2]}
;var Vf=/cssbin\/(?:debug-)?([a-zA-Z0-9_-]+?)(?:-2x|-web|-rtl|-vfl|.css)/;function Wf(a){if(window.spf){var b=a.match(Vf);spf.style.load(a,b?b[1]:"",void 0)}else Xf(a)}
function Xf(a){var b=Yf(a),c=document.getElementById(b),d=c&&Fe(c,"loaded");d||c&&!d||(c=Zf(a,b,function(){Fe(c,"loaded")||(Ge(c),Qe(b),R(Aa(Se,b),0))}))}
function Zf(a,b,c){var d=document.createElement("link");d.id=b;d.onload=function(){c&&setTimeout(c,0)};
a=ac(a);d.rel="stylesheet";d.href=a instanceof Mb&&a.constructor===Mb&&a.f===Nb?a.b:"type_error:TrustedResourceUrl";(document.getElementsByTagName("head")[0]||document.body).appendChild(d);return d}
function Yf(a){var b=document.createElement("a");Wb(b,a);a=b.href.replace(/^[a-zA-Z]+:\/\//,"//");return"css-"+Fa(a)}
;var $f;var ag=A,bg=ag.match(/\((iPad|iPhone|iPod)( Simulator)?;/);if(!bg||2>bg.length)$f=void 0;else{var cg=ag.match(/\((iPad|iPhone|iPod)( Simulator)?; (U; )?CPU (iPhone )?OS (\d+_\d)[_ ]/);$f=cg&&6==cg.length?Number(cg[5].replace("_",".")):0}0<=$f&&0<=A.search("Safari")&&A.search("Version");var dg={"api.invalidparam":2,auth:150,"drm.auth":150,"heartbeat.net":150,"heartbeat.servererror":150,"heartbeat.stop":150,"html5.unsupportedads":5,"fmt.noneavailable":5,"fmt.decode":5,"fmt.unplayable":5,"html5.missingapi":5,"html5.unsupportedlive":5,"drm.unavailable":5};var eg;var fg=A,fg=fg.toLowerCase();if(-1!=fg.indexOf("android")){var gg=fg.match(/android\D*(\d\.\d)[^\;|\)]*[\;\)]/);if(gg)eg=Number(gg[1]);else{var hg={cupcake:1.5,donut:1.6,eclair:2,froyo:2.2,gingerbread:2.3,honeycomb:3,"ice cream sandwich":4,jellybean:4.1,kitkat:4.4,lollipop:5.1,marshmallow:6,nougat:7.1},ig=[],jg=0,kg;for(kg in hg)ig[jg++]=kg;var lg=fg.match("("+ig.join("|")+")");eg=lg?hg[lg[0]]:0}}else eg=void 0;var mg=['video/mp4; codecs="avc1.42001E, mp4a.40.2"','video/webm; codecs="vp8.0, vorbis"'],ng=['audio/mp4; codecs="mp4a.40.2"'];function og(a){L.call(this);this.b=[];this.g=a||this}
w(og,L);function pg(a,b,c,d){d=He(u(d,a.g));d={target:b,name:c,ia:d};b.addEventListener(c,d.ia,void 0);a.b.push(d)}
function qg(a){for(;a.b.length;){var b=a.b.pop();b.target.removeEventListener(b.name,b.ia)}}
og.prototype.o=function(){qg(this);og.B.o.call(this)};function S(a){return P("EXPERIMENT_FLAGS",{})[a]}
;function rg(a,b,c,d){this.f=a;this.i=b;this.g=c;this.b=d}
var sg=1;function tg(a){var b={};void 0!==a.f?b.trackingParams=a.f:(b.veType=a.i,null!=a.g&&(b.veCounter=a.g));void 0!==a.b&&(b.dataElement=tg(a.b));return b}
;var ug={log_event:"events",log_interaction:"interactions"},vg={},wg={},xg=0,gb=r("yt.logging.transport.logPayloadsQueue_")||{};q("yt.logging.transport.logPayloadsQueue_",gb,void 0);var yg=r("yt.logging.transport.tokensToCttTargetIds_")||{};q("yt.logging.transport.tokensToCttTargetIds_",yg,void 0);
function zg(a,b){wg[a.endpoint]=b;var c;if(a.da){c=a.da;var d={};c.videoId?d.videoId=c.videoId:c.playlistId&&(d.playlistId=c.playlistId);yg[a.da.token]=d;c=Ag(a.endpoint,a.da.token)}else c=Ag(a.endpoint);c.push(a.xa);d=Number(S("web_logging_max_batch")||0)||20;c.length>=d?Bg():Cg()}
function Bg(){window.clearTimeout(xg);if(!fb()){for(var a in gb){var b=vg[a];if(!b){var c=wg[a];if(!c)continue;b=new c;vg[a]=b}var c=void 0,d=a,e=ug[d];for(c in gb[d]){var f=b.f();f[e]=Ag(d,c);f.requestTimeMs=Math.round(ze());var g=yg[c];if(g)a:{var h,k=f,n=c;if(g.videoId)h="VIDEO";else if(g.playlistId)h="PLAYLIST";else break a;k.credentialTransferTokenTargetId=g;k.context=k.context||{};k.context.user=k.context.user||{};k.context.user.credentialTransferTokens=[{token:n,scope:h}]}delete yg[c];b.g(d,
f,{})}delete gb[a]}fb()||Cg()}}
function Cg(){window.clearTimeout(xg);xg=R(Bg,P("LOGGING_BATCH_TIMEOUT",1E4))}
function Ag(a,b){b||(b="");gb[a]=gb[a]||{};gb[a][b]=gb[a][b]||[];return gb[a][b]}
;function Dg(){if(null==r("_lact",window)){var a=parseInt(P("LACT"),10),a=isFinite(a)?v()-Math.max(a,0):-1;q("_lact",a,window);-1==a&&Eg();Rf(document,"keydown",Eg);Rf(document,"keyup",Eg);Rf(document,"mousedown",Eg);Rf(document,"mouseup",Eg);Ne("page-mouse",Eg);Ne("page-scroll",Eg);Ne("page-resize",Eg)}}
function Eg(){null==r("_lact",window)&&(Dg(),r("_lact",window));var a=v();q("_lact",a,window);Qe("USER_ACTIVE")}
function Fg(){var a=r("_lact",window);return null==a?-1:Math.max(v()-a,0)}
;function Gg(a,b,c,d,e){var f={};f.eventTimeMs=Math.round(d||ze());f[a]=b;S("web_gel_lact")&&(f.context={lastActivityMs:Fg()});zg({endpoint:"log_event",xa:f,da:e},c)}
;function Hg(a){a={client:{hl:a.Qa,gl:a.Pa,clientName:a.Oa,clientVersion:a.innertubeContextClientVersion}};P("DELEGATED_SESSION_ID")&&(a.user={onBehalfOfUser:P("DELEGATED_SESSION_ID")});return a}
function Ig(){return{apiaryHost:P("APIARY_HOST",void 0),Ga:P("APIARY_HOST_FIRSTPARTY",void 0),gapiHintOverride:!!P("GAPI_HINT_OVERRIDE",void 0),gapiHintParams:P("GAPI_HINT_PARAMS",void 0),innertubeApiKey:P("INNERTUBE_API_KEY",void 0),innertubeApiVersion:P("INNERTUBE_API_VERSION",void 0),Oa:P("INNERTUBE_CONTEXT_CLIENT_NAME","WEB"),innertubeContextClientVersion:P("INNERTUBE_CONTEXT_CLIENT_VERSION",void 0),Qa:P("INNERTUBE_CONTEXT_HL",void 0),Pa:P("INNERTUBE_CONTEXT_GL",void 0),ob:P("XHR_APIARY_HOST",
void 0)}}
;function Jg(){this.b=Ig()}
Jg.prototype.f=function(){return{context:Hg(this.b)}};
Jg.prototype.g=function(a,b,c){P("VISITOR_DATA")||Q(Error("Missing VISITOR_DATA when sending innertube request."));b={headers:{"Content-Type":"application/json","X-Goog-Visitor-Id":P("VISITOR_DATA","")},A:b,ya:"JSON",O:c.O,F:c.F,onError:c.onError,timeout:c.timeout,withCredentials:!0};a:{c=[];var d=uc(String(m.location.href)),e=m.__OVERRIDE_SID;null==e&&(e=(new Jc(document)).get("SID"));if(e&&(d=(e=0==d.indexOf("https:")||0==d.indexOf("chrome-extension:"))?m.__SAPISID:m.__APISID,null==d&&(d=(new Jc(document)).get(e?
"SAPISID":"APISID")),d)){var e=e?"SAPISIDHASH":"APISIDHASH",f=String(m.location.href);c=f&&d&&e?[e,Hc(uc(f),d,c||null)].join(" "):null;break a}c=null}c&&(b.headers.Authorization=c,b.headers["X-Goog-AuthUser"]=P("SESSION_INDEX",0));c=this.b.ob;c.startsWith("http")||(c="//"+c);tf(""+c+("/youtubei/"+this.b.innertubeApiVersion+"/"+a)+"?alt=json&key="+this.b.innertubeApiKey,b)};var Kg=r("yt.logging.latency.usageStats_")||{};q("yt.logging.latency.usageStats_",Kg,void 0);var Lg=0;function Mg(a){Kg[a]=Kg[a]||{count:0};var b=Kg[a];b.count++;b.time=ze();Lg||(Lg=zf(Ng,0,5E3));return 10<b.count?(11==b.count&&uf(Error("CSI data exceeded logging limit with key: "+a)),!0):!1}
function Ng(){var a=ze(),b;for(b in Kg)6E4<a-Kg[b].time&&delete Kg[b];Lg=0}
;function Og(a,b,c,d){Pg(a,{attachChild:{csn:b,parentVisualElement:tg(c),visualElements:[tg(d)]}},void 0)}
function Qg(a,b,c){c=Ha(c,function(a){return tg(a)});
Pg(a,{visibilityUpdate:{csn:b,visualElements:c}})}
function Pg(a,b,c){b.eventTimeMs=Math.round(ze());b.lactMs=Fg();c&&(b.clientData=Rg(c));zg({endpoint:"log_interaction",xa:b},a)}
function Rg(a){var b={};a.analyticsChannelData&&(b.analyticsDatas=Ha(a.analyticsChannelData,function(a){return{tabName:a.tabName,cardName:a.cardName,isChannelScreen:a.isChannelScreen,insightId:a.insightId,externalChannelId:a.externalChannelId,externalContentOwnerId:a.externalContentOwnerId}}));
return{playbackData:{clientPlaybackNonce:a.clientPlaybackNonce},analyticsChannelData:b,externalLinkData:a.externalLinkData}}
;function Sg(){if(!Tg&&!Ug||!window.JSON)return null;var a;try{a=Tg.get("yt-player-two-stage-token")}catch(b){}if(!t(a))try{a=Ug.get("yt-player-two-stage-token")}catch(b){}if(!t(a))return null;try{a=JSON.parse(a,void 0)}catch(b){}return a}
var Ug,Vg=new xe;Ug=Vg.isAvailable()?new te(Vg):null;var Tg,Wg=new ye;Tg=Wg.isAvailable()?new te(Wg):null;function Xg(){var a=P("ROOT_VE_TYPE",void 0);return a?new rg(void 0,a,void 0):null}
function Yg(){var a=P("client-screen-nonce",void 0);a||(a=P("EVENT_ID",void 0));return a}
;var Zg={},$g=0;function ah(a,b){a&&(P("USE_NET_AJAX_FOR_PING_TRANSPORT",!1)?of(a,b):bh(a,b))}
function bh(a,b){var c=new Image,d=""+$g++;Zg[d]=c;c.onload=c.onerror=function(){b&&Zg[d]&&b();delete Zg[d]};
c.src=a}
;function T(a,b){this.version=a;this.args=b}
function ch(a){if(!a.Ca){var b={};a.call(b);a.Ca=b.version}return a.Ca}
function dh(a,b){function c(){a.apply(this,b.args)}
if(!b.args||!b.version)throw Error("yt.pubsub2.Data.deserialize(): serializedData is incomplete.");var d;try{d=ch(a)}catch(e){}if(!d||b.version!=d)throw Error("yt.pubsub2.Data.deserialize(): serializedData version is incompatible.");c.prototype=a.prototype;try{return new c}catch(e){throw e.message="yt.pubsub2.Data.deserialize(): "+e.message,e;}}
function U(a,b){this.topic=a;this.b=b}
U.prototype.toString=function(){return this.topic};var eh=r("yt.pubsub2.instance_")||new N;N.prototype.subscribe=N.prototype.subscribe;N.prototype.unsubscribeByKey=N.prototype.L;N.prototype.publish=N.prototype.V;N.prototype.clear=N.prototype.clear;q("yt.pubsub2.instance_",eh,void 0);var fh=r("yt.pubsub2.subscribedKeys_")||{};q("yt.pubsub2.subscribedKeys_",fh,void 0);var gh=r("yt.pubsub2.topicToKeys_")||{};q("yt.pubsub2.topicToKeys_",gh,void 0);var hh=r("yt.pubsub2.isAsync_")||{};q("yt.pubsub2.isAsync_",hh,void 0);q("yt.pubsub2.skipSubKey_",null,void 0);
function V(a,b){var c=ih();c&&c.publish.call(c,a.toString(),a,b)}
function W(a,b){var c=ih();if(!c)return 0;var d=c.subscribe(a.toString(),function(c,f){if(!window.yt.pubsub2.skipSubKey_||window.yt.pubsub2.skipSubKey_!=d){var e=function(){if(fh[d])try{if(f&&a instanceof U&&a!=c)try{f=dh(a.b,f)}catch(h){throw h.message="yt.pubsub2 cross-binary conversion error for "+a.toString()+": "+h.message,h;}b.call(window,f)}catch(h){Q(h)}};
hh[a.toString()]?r("yt.scheduler.instance")?Af(e):R(e,0):e()}});
fh[d]=!0;gh[a.toString()]||(gh[a.toString()]=[]);gh[a.toString()].push(d);return d}
function jh(a){var b=ih();b&&("number"==typeof a&&(a=[a]),z(a,function(a){b.unsubscribeByKey(a);delete fh[a]}))}
function ih(){return r("yt.pubsub2.instance_")}
;var kh=window.performance||window.mozPerformance||window.msPerformance||window.webkitPerformance||{};function lh(a,b){T.call(this,1,arguments)}
w(lh,T);var mh=new U("timing-sent",lh);var nh=v().toString();var oh={vc:!0},ph={ad_at:"adType",cpn:"clientPlaybackNonce",csn:"clientScreenNonce",is_nav:"isNavigation",yt_lt:"loadType",yt_ad:"isMonetized",yt_ad_pr:"prerollAllowed",yt_red:"isRedSubscriber",yt_vis:"isVisible",docid:"videoId",plid:"videoId"},qh="ap c cver ei yt_fss yt_li".split(" "),rh=["isNavigation","isMonetized","prerollAllowed","isRedSubscriber","isVisible"],sh=u(kh.clearResourceTimings||kh.webkitClearResourceTimings||kh.mozClearResourceTimings||kh.msClearResourceTimings||kh.oClearResourceTimings||
ma,kh);
function th(a){if("_"!=a[0]){var b=a;kh.mark&&(0==b.lastIndexOf("mark_",0)||(b="mark_"+b),kh.mark(b))}var b=uh(),c=ze();b[a]&&(b["_"+a]=b["_"+a]||[b[a]],b["_"+a].push(c));b[a]=c;vh()["tick_"+a]=void 0;ze();S("csi_on_gel")?(b=wh(),"_start"==a?Mg("baseline_"+b)||Gg("latencyActionBaselined",{clientActionNonce:b},Jg,void 0):Mg("tick_"+a+"_"+b)||Gg("latencyActionTicked",{tickName:a,clientActionNonce:b},Jg,void 0),a=!0):a=!1;if(a=!a)a=!r("yt.timing.pingSent_");if(a&&(b=P("TIMING_ACTION",void 0),a=uh(),
r("yt.timing.ready_")&&b&&a._start&&xh())){b=!0;c=P("TIMING_WAIT",[]);if(c.length)for(var d=0,e=c.length;d<e;++d)if(!(c[d]in a)){b=!1;break}b&&yh()}}
function zh(){var a=Ah().info.yt_lt="hot_bg";vh().info_yt_lt=a;if(S("csi_on_gel"))if("yt_lt"in ph){var b={},c=ph.yt_lt;0<=Ga(rh,c)&&(a=!!a);b[c]=a;a=wh();c=Object.keys(b).join("");Mg("info_"+c+"_"+a)||(b.clientActionNonce=a,Gg("latencyActionInfo",b,Jg))}else"yt_lt"in qh||Q(Error("Unknown label yt_lt logged with GEL CSI."))}
function xh(){var a=uh();if(a.aft)return a.aft;for(var b=P("TIMING_AFT_KEYS",["ol"]),c=b.length,d=0;d<c;d++){var e=a[b[d]];if(e)return e}return NaN}
function yh(){if(!S("csi_on_gel")){var a=uh(),b=Ah().info,c=a._start,d;for(d in a)if(0==d.lastIndexOf("_",0)&&ra(a[d])){var e=d.slice(1);if(e in oh){var f=Ha(a[d],function(a){return Math.round(a-c)});
b["all_"+e]=f.join()}delete a[d]}e=!!b.ap;if(f=r("yt.timing.reportbuilder_")){if(f=f(a,b,void 0))Bh(f,e),Ch(),sh(),Dh(!1,void 0),P("TIMING_ACTION")&&O("PREVIOUS_ACTION",P("TIMING_ACTION")),O("TIMING_ACTION","")}else{var g=P("CSI_SERVICE_NAME","youtube"),f={v:2,s:g,action:P("TIMING_ACTION",void 0)},h=b.srt;void 0!==a.srt&&delete b.srt;if(b.h5jse){var k=window.location.protocol+r("ytplayer.config.assets.js");(k=kh.getEntriesByName?kh.getEntriesByName(k)[0]:null)?b.h5jse=Math.round(b.h5jse-k.responseEnd):
delete b.h5jse}a.aft=xh();Eh()&&"youtube"==g&&(zh(),g=a.vc,k=a.pbs,delete a.aft,b.aft=Math.round(k-g));for(var n in b)"_"!=n.charAt(0)&&(f[n]=b[n]);a.ps=ze();b={};n=[];for(d in a)"_"!=d.charAt(0)&&(g=Math.round(a[d]-c),b[d]=g,n.push(d+"."+g));f.rt=n.join(",");(a=r("ytdebug.logTiming"))&&a(f,b);Bh(f,e,void 0);V(mh,new lh(b.aft+(h||0),void 0))}}}
function Bh(a,b,c){if(S("debug_csi_data")){var d=r("yt.timing.csiData");d||(d=[],q("yt.timing.csiData",d,void 0));d.push({page:location.href,time:new Date,args:a})}var d="",e;for(e in a)d+="&"+e+"="+a[e];a="/csi_204?"+d.substring(1);if(window.navigator&&window.navigator.sendBeacon&&b)try{window.navigator&&window.navigator.sendBeacon&&window.navigator.sendBeacon(a,"")||ah(a,void 0)}catch(f){ah(a,void 0)}else ah(a);Dh(!0,c)}
function wh(){var a=Ah().nonce;if(!a){var b;a:{if(window.crypto&&window.crypto.getRandomValues)try{var c=Array(16),d=new Uint8Array(16);window.crypto.getRandomValues(d);for(a=0;a<c.length;a++)c[a]=d[a];b=c;break a}catch(e){}b=Array(16);for(c=0;16>c;c++){d=v();for(a=0;a<d%23;a++)b[c]=Math.random();b[c]=Math.floor(256*Math.random())}if(nh)for(c=1,d=0;d<nh.length;d++)b[c%16]=b[c%16]^b[(c-1)%16]/4^nh.charCodeAt(d),c++}c=[];for(d=0;d<b.length;d++)c.push("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-_".charAt(b[d]&
63));a=c.join("");Ah().nonce=a}return a}
function uh(){return Ah().tick}
function vh(){var a=Ah();"gel"in a||(a.gel={});return a.gel}
function Ah(){return r("ytcsi.data_")||Ch()}
function Ch(){var a={tick:{},info:{}};q("ytcsi.data_",a,void 0);return a}
function Dh(a,b){q("yt.timing."+(b||"")+"pingSent_",a,void 0)}
function Eh(){var a=uh(),b=a.pbr,c=a.vc,a=a.pbs;return b&&c&&a&&b<c&&c<a&&1==Ah().info.yt_pvis}
;function Fh(a,b){L.call(this);this.w=this.l=a;this.T=b;this.C=!1;this.g={};this.Z=this.S=null;this.U=new N;Jd(this,Aa(Kd,this.U));this.j={};this.K=this.aa=this.i=this.ha=this.b=null;this.W=!1;this.M=this.D=this.J=this.R=null;this.ba={};this.Fa=["onReady"];this.X=new og(this);Jd(this,Aa(Kd,this.X));this.fa=null;this.ra=NaN;this.Y={};Gh(this);this.H("onDetailedError",u(this.Va,this));this.H("onTabOrderChange",u(this.Ha,this));this.H("onTabAnnounce",u(this.sa,this));this.H("WATCH_LATER_VIDEO_ADDED",
u(this.Wa,this));this.H("WATCH_LATER_VIDEO_REMOVED",u(this.Xa,this));Fb||(this.H("onMouseWheelCapture",u(this.Ta,this)),this.H("onMouseWheelRelease",u(this.Ua,this)));this.H("onAdAnnounce",u(this.sa,this));this.N=new og(this);Jd(this,Aa(Kd,this.N));this.ga=!1;this.ea=null}
w(Fh,L);var Hh=["drm.unavailable","fmt.noneavailable","html5.missingapi","html5.unsupportedads","html5.unsupportedlive"];l=Fh.prototype;l.qa=function(a,b){this.f||(Ih(this,a),Jh(this,b),this.C&&Kh(this))};
function Ih(a,b){a.ha=b;a.b=Kf(b);a.i=a.b.attrs.id||a.i;"video-player"==a.i&&(a.i=a.T,a.b.attrs.id=a.T);a.w.id==a.i&&(a.i+="-player",a.b.attrs.id=a.i);a.b.args.enablejsapi="1";a.b.args.playerapiid=a.T;a.aa||(a.aa=Lh(a,a.b.args.jsapicallback||"onYouTubePlayerReady"));a.b.args.jsapicallback=null;var c=a.b.attrs.width;c&&(a.w.style.width=cc(Number(c)||c));if(c=a.b.attrs.height)a.w.style.height=cc(Number(c)||c)}
l.Ka=function(){return this.ha};
function Kh(a){a.b.loaded||(a.b.loaded=!0,"0"!=a.b.args.autoplay?a.g.loadVideoByPlayerVars(a.b.args):a.g.cueVideoByPlayerVars(a.b.args))}
function Mh(a){if(!p(a.b.disable.flash)){var b=a.b.disable,c;c=Uf(Tf.getInstance(),a.b.minVersion);b.flash=!c}return!a.b.disable.flash}
function Nh(a,b){if((!b||(5!=(dg[b.errorCode]||5)?0:-1!=Hh.indexOf(b.errorCode)))&&Mh(a)){var c=Oh(a);c&&c.stopVideo&&c.stopVideo();var d=a.b;c&&c.getUpdatedConfigurationData&&(c=c.getUpdatedConfigurationData(),d=Jf(c));d.args.autoplay=1;d.args.html5_unavailable="1";Ih(a,d);Jh(a,"flash")}}
function Jh(a,b){if(!a.f){if(!b){var c;if(!(c=!a.b.html5&&Mh(a))){if(!p(a.b.disable.html5)){var d;c=!0;void 0!=a.b.args.deviceHasDisplay&&(c=a.b.args.deviceHasDisplay);if(2.2==eg)d=!0;else{a:{var e=c;c=r("yt.player.utils.videoElement_");c||(c=document.createElement("VIDEO"),q("yt.player.utils.videoElement_",c,void 0));try{if(c.canPlayType)for(var e=e?mg:ng,f=0;f<e.length;f++)if(c.canPlayType(e[f])){d=null;break a}d="fmt.noneavailable"}catch(g){d="html5.missingapi"}}d=!d}d&&(d=Ph(a)||a.b.assets.js);
a.b.disable.html5=!d;d||(a.b.args.html5_unavailable="1")}c=!!a.b.disable.html5}b=c?Mh(a)?"flash":"unsupported":"html5"}("flash"==b?a.mb:a.nb).call(a)}}
function Ph(a){var b=!0,c=Oh(a);c&&a.b&&(a=a.b,b=Fe(c,"version")==a.assets.js);return b&&!!r("yt.player.Application.create")}
l.nb=function(){if(!this.W){var a=Ph(this);if(a&&"html5"==Qh(this))this.K="html5",this.C||this.P();else if(Rh(this),this.K="html5",a&&this.J)this.l.appendChild(this.J),this.P();else{this.b.loaded=!0;var b=!1;this.R=u(function(){b=!0;var a=this.l,d=Kf(this.b);r("yt.player.Application.create")(a,d);this.P()},this);
this.W=!0;a?this.R():($e(this.b.assets.js,this.R),Wf(this.b.assets.css),Sh(this)&&!b&&q("yt.player.Application.create",null,void 0))}}};
l.mb=function(){var a=Kf(this.b);if(!this.D){var b=Oh(this);b&&(this.D=document.createElement("SPAN"),this.D.tabIndex=0,pg(this.X,this.D,"focus",this.va),this.M=document.createElement("SPAN"),this.M.tabIndex=0,pg(this.X,this.M,"focus",this.va),b.parentNode&&b.parentNode.insertBefore(this.D,b),b.parentNode&&b.parentNode.insertBefore(this.M,b.nextSibling))}a.attrs.width=a.attrs.width||"100%";a.attrs.height=a.attrs.height||"100%";if("flash"==Qh(this))this.K="flash",this.C||this.P();else{Rh(this);this.K=
"flash";this.b.loaded=!0;var b=Tf.getInstance(),c=(-1<b.i.indexOf("Gnash")&&-1==b.i.indexOf("AVM2")||9==b.b&&1==b.f||9==b.b&&0==b.f&&1==b.g?0:9<=b.b)||-1<navigator.userAgent.indexOf("Sony/COM2")&&!Uf(b,9,1,58)?a.url:a.urlV9As2;window!=window.top&&document.referrer&&(a.args.framer=document.referrer.substring(0,128));b=this.l;if(c){var b=t(b)?Xb(b):b,d=ib(a.attrs);d.tabindex=0;var e=ib(a.params);e.flashvars=jf(a.args);if(Ae){d.classid="clsid:D27CDB6E-AE6D-11cf-96B8-444553540000";e.movie=c;var a=document.createElement("object"),
f;for(f in d)a.setAttribute(f,d[f]);for(var g in e)f=document.createElement("param"),f.setAttribute("name",g),f.setAttribute("value",e[g]),a.appendChild(f)}else{d.type="application/x-shockwave-flash";d.src=c;a=document.createElement("embed");a.setAttribute("name",d.id);for(var h in d)a.setAttribute(h,d[h]);for(var k in e)a.setAttribute(k,e[k])}g=document.createElement("div");g.appendChild(a);b.innerHTML=g.innerHTML}this.P()}};
l.va=function(){Oh(this).focus()};
function Oh(a){var b=Xb(a.i);!b&&a.w&&a.w.querySelector&&(b=a.w.querySelector("#"+a.i));return b}
l.P=function(){if(!this.f){var a=Oh(this),b=!1;try{a&&a.getApiInterface&&a.getApiInterface()&&(b=!0)}catch(f){}if(b)if(this.W=!1,a.isNotServable&&a.isNotServable(this.b.args.video_id))Nh(this);else{Gh(this);this.C=!0;a=Oh(this);a.addEventListener&&(this.S=Th(this,a,"addEventListener"));a.removeEventListener&&(this.Z=Th(this,a,"removeEventListener"));for(var b=a.getApiInterface(),b=b.concat(a.getInternalApiInterface()),c=0;c<b.length;c++){var d=b[c];this.g[d]||(this.g[d]=Th(this,a,d))}for(var e in this.j)this.S(e,
this.j[e]);Kh(this);this.aa&&this.aa(this.g);this.U.V("onReady",this.g)}else this.ra=R(u(this.P,this),50)}};
function Th(a,b,c){var d=b[c];return function(){try{return a.fa=null,d.apply(b,arguments)}catch(e){"Bad NPObject as private data!"!=e.message&&"sendAbandonmentPing"!=c&&(e.message+=" ("+c+")",a.fa=e,Q(e,"WARNING"))}}}
function Gh(a){a.C=!1;if(a.Z)for(var b in a.j)a.Z(b,a.j[b]);for(var c in a.Y)window.clearTimeout(parseInt(c,10));a.Y={};a.S=null;a.Z=null;for(var d in a.g)a.g[d]=null;a.g.addEventListener=u(a.H,a);a.g.removeEventListener=u(a.eb,a);a.g.destroy=u(a.dispose,a);a.g.getLastError=u(a.La,a);a.g.getPlayerType=u(a.Ma,a);a.g.getCurrentVideoConfig=u(a.Ka,a);a.g.loadNewVideoConfig=u(a.qa,a);a.g.isReady=u(a.pb,a)}
l.pb=function(){return this.C};
l.H=function(a,b){if(!this.f){var c=Lh(this,b);if(c){if(!(0<=Ga(this.Fa,a)||this.j[a])){var d=Uh(this,a);this.S&&this.S(a,d)}this.U.subscribe(a,c);"onReady"==a&&this.C&&R(Aa(c,this.g),0)}}};
l.eb=function(a,b){if(!this.f){var c=Lh(this,b);c&&me(this.U,a,c)}};
function Lh(a,b){var c=b;if("string"==typeof b){if(a.ba[b])return a.ba[b];c=function(){var a=r(b);a&&a.apply(m,arguments)};
a.ba[b]=c}return c?c:null}
function Uh(a,b){var c="ytPlayer"+b+a.T;a.j[b]=c;m[c]=function(c){var d=R(function(){if(!a.f){a.U.V(b,c);var e=a.Y,g=String(d);g in e&&delete e[g]}},0);
hb(a.Y,String(d))};
return c}
l.Ha=function(a){a=a?Zb:Yb;for(var b=a(document.activeElement);b&&(1!=b.nodeType||b==this.D||b==this.M||(b.focus(),b!=document.activeElement));)b=a(b)};
l.sa=function(a){Qe("a11y-announce",a)};
l.Va=function(a){Nh(this,a)};
l.Wa=function(a){Qe("WATCH_LATER_VIDEO_ADDED",a)};
l.Xa=function(a){Qe("WATCH_LATER_VIDEO_REMOVED",a)};
l.Ta=function(){if(!this.ga){if(Jb){var a=document,b=a.scrollingElement?a.scrollingElement:qb||"CSS1Compat"!=a.compatMode?a.body||a.documentElement:a.documentElement,a=a.parentWindow||a.defaultView;this.ea=D&&E("10")&&a.pageYOffset!=b.scrollTop?new Oa(b.scrollLeft,b.scrollTop):new Oa(a.pageXOffset||b.scrollLeft,a.pageYOffset||b.scrollTop);pg(this.N,window,"scroll",this.ab);pg(this.N,this.l,"touchmove",this.Za)}else pg(this.N,this.l,"mousewheel",this.wa),pg(this.N,this.l,"wheel",this.wa);this.ga=!0}};
l.Ua=function(){qg(this.N);this.ga=!1};
l.wa=function(a){a=a||window.event;a.returnValue=!1;a.preventDefault&&a.preventDefault()};
l.ab=function(){window.scrollTo(this.ea.b,this.ea.f)};
l.Za=function(a){a.preventDefault()};
l.Ma=function(){return this.K||Qh(this)};
l.La=function(){return this.fa};
function Qh(a){return(a=Oh(a))?"div"==a.tagName.toLowerCase()?"html5":"flash":null}
function Rh(a){th("dcp");a.cancel();Gh(a);a.K=null;a.b&&(a.b.loaded=!1);var b=Oh(a);"html5"==Qh(a)?Ph(a)||!Sh(a)?a.J=b:(b&&b.destroy&&b.destroy(),a.J=null):b&&b.destroy&&b.destroy();for(var b=a.l,c;c=b.firstChild;)b.removeChild(c);qg(a.X);a.D=null;a.M=null}
l.cancel=function(){this.R&&Ze(this.b.assets.js,this.R);window.clearTimeout(this.ra);this.W=!1};
l.o=function(){Rh(this);if(this.J&&this.b)try{this.J.destroy()}catch(b){Q(b)}this.ba=null;for(var a in this.j)m[this.j[a]]=null;this.ha=this.b=this.g=null;delete this.l;delete this.w;Fh.B.o.call(this)};
function Sh(a){return a.b&&a.b.args&&a.b.args.fflags?-1!=a.b.args.fflags.indexOf("player_destroy_old_version=true"):!1}
;var Vh={},Wh="player_uid_"+(1E9*Math.random()>>>0);function Xh(a,b){a=t(a)?Xb(a):a;b=Jf(b);var c=Wh+"_"+va(a),d=Vh[c];if(d)return d.qa(b),d.g;d=new Fh(a,c);Vh[c]=d;Qe("player-added",d.g);Jd(d,Aa(Yh,d));R(function(){d.qa(b)},0);
return d.g}
function Yh(a){Vh[a.T]=null}
function Zh(a){a=Xb(a);if(!a)return null;var b=Wh+"_"+va(a),c=Vh[b];c||(c=new Fh(a,b),Vh[b]=c);return c.g}
;function $h(a,b,c){b=void 0===b?{}:b;c=void 0===c?!1:c;var d=P("EVENT_ID");d&&(b.ei||(b.ei=d));if(b){var d=a,e=P("VALID_SESSION_TEMPDATA_DOMAINS",[]),f=ec(F(window.location.href)[3]||null);f&&e.push(f);f=ec(F(d)[3]||null);if(0<=Ga(e,f)||!f&&0==d.lastIndexOf("/",0))if(S("autoescape_tempdata_url")&&(e=document.createElement("a"),Wb(e,d),d=e.href),d){var f=F(d),d=f[5],e=f[6],f=f[7],g="";d&&(g+=d);e&&(g+="?"+e);f&&(g+="#"+f);d=g;e=d.indexOf("#");if(d=0>e?d:d.substr(0,e)){if(b.itct||b.ved)b.csn=b.csn||
Yg();d="ST-"+Fa(d).toString(36);e=b?jf(b):"";Kc.set(""+d,e,5,"/","youtube.com");b&&(b=b.itct||b.ved,d=r("yt.logging.screen.storeParentElement"),b&&d&&d(new rg(b)))}}}if(c)return!1;if((window.ytspf||{}).enabled)spf.navigate(a);else{var h,k,n;h=void 0===h?{}:h;k=void 0===k?"":k;n=void 0===n?window:n;c=n.location;a=fc(ic([a],h))+k;a=a instanceof Ob?a:Sb(a);c.href=Qb(a)}return!0}
;var ai=r("yt.abuse.botguardInitialized")||cf;q("yt.abuse.botguardInitialized",ai,void 0);var bi=r("yt.abuse.invokeBotguard")||df;q("yt.abuse.invokeBotguard",bi,void 0);var ci=r("yt.abuse.dclkstatus.checkDclkStatus")||Ef;q("yt.abuse.dclkstatus.checkDclkStatus",ci,void 0);var di=r("yt.player.exports.navigate")||$h;q("yt.player.exports.navigate",di,void 0);var ei=r("yt.player.embed")||Xh;q("yt.player.embed",ei,void 0);var fi=r("yt.player.getPlayerByElement")||Zh;q("yt.player.getPlayerByElement",fi,void 0);
var gi=r("yt.util.activity.init")||Dg;q("yt.util.activity.init",gi,void 0);var hi=r("yt.util.activity.getTimeSinceActive")||Fg;q("yt.util.activity.getTimeSinceActive",hi,void 0);var ii=r("yt.util.activity.setTimestamp")||Eg;q("yt.util.activity.setTimestamp",ii,void 0);function ji(a){this.b=a||Ig();ki||(ki=li(this.b))}
function li(a){return(new M(function(b){try{var c={gapiHintOverride:a.gapiHintOverride,_c:{jsl:{h:a.gapiHintParams}},callback:b},d=ta(c)?{callback:c}:c||{};d._c&&d._c.jsl&&d._c.jsl.h||kb(d,{_c:{jsl:{h:P("GAPI_HINT_PARAMS",void 0)}}});if(d.gapiHintOverride||P("GAPI_HINT_OVERRIDE")){var e;var f=document.location.href;if(-1!=f.indexOf("?")){var f=(f||"").split("#")[0],g=f.split("?",2);e=gf(1<g.length?g[1]:g[0])}else e={};var h=e.gapi_jsh;h&&kb(d,{_c:{jsl:{h:h}}})}od("client",d)}catch(k){Q(k)}})).then(function(){})}
ji.prototype.i=function(){var a=r("gapi.config.update");a("googleapis.config/auth/useFirstPartyAuth",!0);var b=this.b.apiaryHost;/^[\s\xa0]*$/.test(null==b?"":String(b))||a("googleapis.config/root",(-1==b.indexOf("://")?"//":"")+b);b=this.b.Ga;/^[\s\xa0]*$/.test(null==b?"":String(b))||a("googleapis.config/root-1p",(-1==b.indexOf("://")?"//":"")+b);b=P("SESSION_INDEX");a("googleapis.config/sessionIndex",b);r("gapi.client.setApiKey")(this.b.innertubeApiKey)};
ji.prototype.f=function(){return{context:Hg(this.b)}};
ji.prototype.g=function(a,b,c){var d,e=!1;0<c.timeout&&(d=R(function(){e||(e=!0,c.O&&c.O())},c.timeout));
mi(this,a,b,function(a){if(!e)if(e=!0,d&&window.clearTimeout(d),a)c.F&&c.F(a);else if(c.onError)c.onError()})};
function mi(a,b,c,d){var e={path:"/youtubei/"+a.b.innertubeApiVersion+"/"+b,headers:{"X-Goog-Visitor-Id":P("VISITOR_DATA")},method:"POST",body:Pd(c)},f=u(a.i,a);ki.then(function(){f();r("gapi.client.request")(e).execute(d||ma)})}
var ki=null;function ni(){return S("enable_youtubei_innertube")?Jg:ji}
;function oi(a){var b=jc("/signin?context=popup","next",document.location.protocol+"//"+document.domain+"/post_login"),b=jc(b,"feature","sub_button");if(b=window.open(b,"loginPopup","width=375,height=440,resizable=yes,scrollbars=yes",!0)){var c=Ne("LOGGED_IN",function(b){Pe(P("LOGGED_IN_PUBSUB_KEY",void 0));O("LOGGED_IN",!0);a(b)});
O("LOGGED_IN_PUBSUB_KEY",c);b.moveTo((screen.width-375)/2,(screen.height-440)/2)}}
q("yt.pubsub.publish",Qe,void 0);function pi(a){T.call(this,1,arguments);this.b=a}
w(pi,T);function X(a){T.call(this,1,arguments);this.b=a}
w(X,T);function qi(a,b,c){T.call(this,3,arguments);this.g=a;this.f=b;this.b=null!=c?!!c:null}
w(qi,T);function ri(a,b,c,d,e){T.call(this,2,arguments);this.f=a;this.b=b;this.i=c||null;this.g=d||null;this.source=e||null}
w(ri,T);function si(a,b,c){T.call(this,1,arguments);this.b=a;this.subscriptionId=b}
w(si,T);function ti(a,b,c,d,e,f,g){T.call(this,1,arguments);this.f=a;this.subscriptionId=b;this.b=c;this.i=e||null;this.g=f||null;this.source=g||null}
w(ti,T);
var ui=new U("subscription-batch-subscribe",pi),vi=new U("subscription-batch-unsubscribe",pi),wi=new U("subscription-subscribe",ri),xi=new U("subscription-subscribe-loading",X),yi=new U("subscription-subscribe-loaded",X),zi=new U("subscription-subscribe-success",si),Ai=new U("subscription-subscribe-external",ri),Bi=new U("subscription-unsubscribe",ti),Ci=new U("subscription-unsubscirbe-loading",X),Di=new U("subscription-unsubscribe-loaded",X),Ei=new U("subscription-unsubscribe-success",X),Fi=new U("subscription-external-unsubscribe",
ti),Gi=new U("subscription-enable-ypc",X),Hi=new U("subscription-prefs",qi),Ii=new U("subscription-prefs-success",qi),Ji=new U("subscription-prefs-failure",qi);var Y=null,Ki=[];function Li(a){return{externalChannelId:a.externalChannelId,Ra:!!a.isChannelPaid,source:a.source,subscriptionId:a.subscriptionId}}
function Mi(a){a&&a.externalChannelId&&Ni(Li(a))}
function Ni(a){var b=P("PLAYER_CONFIG");b&&b.args&&void 0!==b.args.authuser||P("SESSION_INDEX")||P("LOGGED_IN")?(V(wi,new ri(a.externalChannelId,a.Ra?{itemType:"U",itemId:a.externalChannelId}:null)),a=jf({event:"subscribe",source:a.source}),ah("/gen_204?"+a,void 0)):Oi(a)}
function Oi(a){oi(function(b){b.subscription_ajax&&Ni(a)})}
function Pi(a){a&&a.externalChannelId&&(a=Li(a),V(Bi,new ti(a.externalChannelId,a.subscriptionId,null)),a=jf({event:"unsubscribe",source:a.source}),ah("/gen_204?"+a,void 0))}
function Qi(a){Y&&Y.channelSubscribed(a.b,a.subscriptionId)}
function Ri(a){Y&&Y.channelUnsubscribed(a.b)}
;function Si(a){return(0==a.search("cue")||0==a.search("load"))&&"loadModule"!=a}
function Ti(a,b,c){t(a)&&(a={mediaContentUrl:a,startSeconds:b,suggestedQuality:c});b=/\/([ve]|embed)\/([^#?]+)/.exec(a.mediaContentUrl);a.videoId=b&&b[2]?b[2]:null;return Ui(a)}
function Ui(a,b,c){if(ua(a)){b="endSeconds startSeconds mediaContentUrl suggestedQuality videoId two_stage_token".split(" ");c={};for(var d=0;d<b.length;d++){var e=b[d];a[e]&&(c[e]=a[e])}return c}return{videoId:a,startSeconds:b,suggestedQuality:c}}
function Vi(a,b,c,d){if(ua(a)&&!ra(a)){b="playlist list listType index startSeconds suggestedQuality".split(" ");c={};for(d=0;d<b.length;d++){var e=b[d];a[e]&&(c[e]=a[e])}return c}c={index:b,startSeconds:c,suggestedQuality:d};t(a)&&16==a.length?c.list="PL"+a:c.playlist=a;return c}
function Wi(a){var b=a.video_id||a.videoId;if(t(b)){var c=Sg()||{},d=Sg()||{};p(void 0)?d[b]=void 0:delete d[b];var e=v()+3E5,f=Ug;if(f&&window.JSON){t(d)||(d=JSON.stringify(d,void 0));try{f.set("yt-player-two-stage-token",d,e)}catch(g){f.remove("yt-player-two-stage-token")}}(b=c[b])&&(a.two_stage_token=b)}}
;function Xi(a){L.call(this);this.g=a;this.g.subscribe("command",this.za,this);this.i={};this.j=!1}
w(Xi,L);l=Xi.prototype;l.start=function(){this.j||this.f||(this.j=!0,Yi(this.g,"RECEIVING"))};
l.za=function(a,b){if(this.j&&!this.f){var c=b||{};switch(a){case "addEventListener":if(t(c.event)&&(c=c.event,!(c in this.i))){var d=u(this.gb,this,c);this.i[c]=d;this.addEventListener(c,d)}break;case "removeEventListener":t(c.event)&&Zi(this,c.event);break;default:this.b.isReady()&&this.b[a]&&(c=$i(a,b||{}),c=this.b[a].apply(this.b,c),(c=aj(a,c))&&this.j&&!this.f&&Yi(this.g,a,c))}}};
l.gb=function(a,b){this.j&&!this.f&&Yi(this.g,a,this.ja(a,b))};
l.ja=function(a,b){if(null!=b)return{value:b}};
function Zi(a,b){b in a.i&&(a.removeEventListener(b,a.i[b]),delete a.i[b])}
l.o=function(){var a=this.g;a.f||me(a.b,"command",this.za,this);this.g=null;for(var b in this.i)Zi(this,b);Xi.B.o.call(this)};function bj(a,b){Xi.call(this,b);this.b=a;this.start()}
w(bj,Xi);bj.prototype.addEventListener=function(a,b){this.b.addEventListener(a,b)};
bj.prototype.removeEventListener=function(a,b){this.b.removeEventListener(a,b)};
function $i(a,b){switch(a){case "loadVideoById":return b=Ui(b),Wi(b),[b];case "cueVideoById":return b=Ui(b),Wi(b),[b];case "loadVideoByPlayerVars":return Wi(b),[b];case "cueVideoByPlayerVars":return Wi(b),[b];case "loadPlaylist":return b=Vi(b),Wi(b),[b];case "cuePlaylist":return b=Vi(b),Wi(b),[b];case "seekTo":return[b.seconds,b.allowSeekAhead];case "playVideoAt":return[b.index];case "setVolume":return[b.volume];case "setPlaybackQuality":return[b.suggestedQuality];case "setPlaybackRate":return[b.suggestedRate];
case "setLoop":return[b.loopPlaylists];case "setShuffle":return[b.shufflePlaylist];case "getOptions":return[b.module];case "getOption":return[b.module,b.option];case "setOption":return[b.module,b.option,b.value];case "handleGlobalKeyDown":return[b.keyCode,b.shiftKey]}return[]}
function aj(a,b){switch(a){case "isMuted":return{muted:b};case "getVolume":return{volume:b};case "getPlaybackRate":return{playbackRate:b};case "getAvailablePlaybackRates":return{availablePlaybackRates:b};case "getVideoLoadedFraction":return{videoLoadedFraction:b};case "getPlayerState":return{playerState:b};case "getCurrentTime":return{currentTime:b};case "getPlaybackQuality":return{playbackQuality:b};case "getAvailableQualityLevels":return{availableQualityLevels:b};case "getDuration":return{duration:b};
case "getVideoUrl":return{videoUrl:b};case "getVideoEmbedCode":return{videoEmbedCode:b};case "getPlaylist":return{playlist:b};case "getPlaylistIndex":return{playlistIndex:b};case "getOptions":return{options:b};case "getOption":return{option:b}}}
bj.prototype.ja=function(a,b){switch(a){case "onReady":return;case "onStateChange":return{playerState:b};case "onPlaybackQualityChange":return{playbackQuality:b};case "onPlaybackRateChange":return{playbackRate:b};case "onError":return{errorCode:b}}return bj.B.ja.call(this,a,b)};
bj.prototype.o=function(){bj.B.o.call(this);delete this.b};function cj(a,b,c,d){L.call(this);this.i=b||null;this.C="*";this.j=c||null;this.b=null;this.channel=d||null;this.K=!!a;this.D=u(this.J,this);window.addEventListener("message",this.D)}
aa(cj,L);cj.prototype.J=function(a){if(!("*"!=this.j&&a.origin!=this.j||this.i&&a.source!=this.i)&&t(a.data)){var b;try{b=Nd(a.data)}catch(c){return}if(!(null==b||this.K&&(this.b&&this.b!=b.id||this.channel&&this.channel!=b.channel))&&b)switch(b.event){case "listening":"null"!=a.origin?this.j=this.C=a.origin:Q(Error("MessageEvent origin is null"),"WARNING");this.i=a.source;this.b=b.id;this.g&&(this.g(),this.g=null);break;case "command":this.l&&(this.w&&!(0<=Ga(this.w,b.func))||this.l(b.func,b.args))}}};
cj.prototype.sendMessage=function(a,b){var c=b||this.i;if(c){this.b&&(a.id=this.b);this.channel&&(a.channel=this.channel);try{var d=Pd(a);c.postMessage(d,this.C)}catch(e){Q(e,"WARNING")}}};
cj.prototype.o=function(){window.removeEventListener("message",this.D);L.prototype.o.call(this)};function dj(a,b,c){cj.call(this,a,b,c||P("POST_MESSAGE_ORIGIN",void 0)||window.document.location.protocol+"//"+window.document.location.hostname,"widget");this.w=this.g=this.l=null}
aa(dj,cj);function ej(){var a=!!P("WIDGET_ID_ENFORCE"),a=this.f=new dj(a),b=u(this.cb,this);a.l=b;a.w=null;this.f.channel="widget";if(a=P("WIDGET_ID"))this.f.b=a;this.i=[];this.l=!1;this.j={}}
l=ej.prototype;l.cb=function(a,b){if("addEventListener"==a&&b){var c=b[0];this.j[c]||"onReady"==c||(this.addEventListener(c,fj(this,c)),this.j[c]=!0)}else this.Da(a,b)};
l.Da=function(){};
function fj(a,b){return u(function(a){this.sendMessage(b,a)},a)}
l.addEventListener=function(){};
l.Ja=function(){this.l=!0;this.sendMessage("initialDelivery",this.ka());this.sendMessage("onReady");z(this.i,this.Ba,this);this.i=[]};
l.ka=function(){return null};
function gj(a,b){a.sendMessage("infoDelivery",b)}
l.Ba=function(a){this.l?this.f.sendMessage(a):this.i.push(a)};
l.sendMessage=function(a,b){this.Ba({event:a,info:void 0==b?null:b})};
l.dispose=function(){this.f=null};function hj(a){ej.call(this);this.b=a;this.g=[];this.addEventListener("onReady",u(this.Ya,this));this.addEventListener("onVideoProgress",u(this.kb,this));this.addEventListener("onVolumeChange",u(this.lb,this));this.addEventListener("onApiChange",u(this.fb,this));this.addEventListener("onPlaybackQualityChange",u(this.hb,this));this.addEventListener("onPlaybackRateChange",u(this.ib,this));this.addEventListener("onStateChange",u(this.jb,this))}
w(hj,ej);l=hj.prototype;l.Da=function(a,b){if(this.b[a]){b=b||[];if(0<b.length&&Si(a)){var c;c=b;if(ua(c[0])&&!ra(c[0]))c=c[0];else{var d={};switch(a){case "loadVideoById":case "cueVideoById":d=Ui.apply(window,c);break;case "loadVideoByUrl":case "cueVideoByUrl":d=Ti.apply(window,c);break;case "loadPlaylist":case "cuePlaylist":d=Vi.apply(window,c)}c=d}Wi(c);b.length=1;b[0]=c}this.b[a].apply(this.b,b);Si(a)&&gj(this,this.ka())}};
l.Ya=function(){var a=u(this.Ja,this);this.f.g=a};
l.addEventListener=function(a,b){this.g.push({eventType:a,listener:b});this.b.addEventListener(a,b)};
l.ka=function(){if(!this.b)return null;var a=this.b.getApiInterface();Ja(a,"getVideoData");for(var b={apiInterface:a},c=0,d=a.length;c<d;c++){var e=a[c],f=e;if(0==f.search("get")||0==f.search("is")){var f=e,g=0;0==f.search("get")?g=3:0==f.search("is")&&(g=2);f=f.charAt(g).toLowerCase()+f.substr(g+1);try{var h=this.b[e]();b[f]=h}catch(k){}}}b.videoData=this.b.getVideoData();b.currentTimeLastUpdated_=v()/1E3;return b};
l.jb=function(a){a={playerState:a,currentTime:this.b.getCurrentTime(),duration:this.b.getDuration(),videoData:this.b.getVideoData(),videoStartBytes:0,videoBytesTotal:this.b.getVideoBytesTotal(),videoLoadedFraction:this.b.getVideoLoadedFraction(),playbackQuality:this.b.getPlaybackQuality(),availableQualityLevels:this.b.getAvailableQualityLevels(),videoUrl:this.b.getVideoUrl(),playlist:this.b.getPlaylist(),playlistIndex:this.b.getPlaylistIndex(),currentTimeLastUpdated_:v()/1E3,playbackRate:this.b.getPlaybackRate(),
mediaReferenceTime:this.b.getMediaReferenceTime()};this.b.getProgressState&&(a.progressState=this.b.getProgressState());this.b.getStoryboardFormat&&(a.storyboardFormat=this.b.getStoryboardFormat());gj(this,a)};
l.hb=function(a){gj(this,{playbackQuality:a})};
l.ib=function(a){gj(this,{playbackRate:a})};
l.fb=function(){for(var a=this.b.getOptions(),b={namespaces:a},c=0,d=a.length;c<d;c++){var e=a[c],f=this.b.getOptions(e);b[e]={options:f};for(var g=0,h=f.length;g<h;g++){var k=f[g],n=this.b.getOption(e,k);b[e][k]=n}}this.sendMessage("apiInfoDelivery",b)};
l.lb=function(){gj(this,{muted:this.b.isMuted(),volume:this.b.getVolume()})};
l.kb=function(a){a={currentTime:a,videoBytesLoaded:this.b.getVideoBytesLoaded(),videoLoadedFraction:this.b.getVideoLoadedFraction(),currentTimeLastUpdated_:v()/1E3,playbackRate:this.b.getPlaybackRate(),mediaReferenceTime:this.b.getMediaReferenceTime()};this.b.getProgressState&&(a.progressState=this.b.getProgressState());gj(this,a)};
l.dispose=function(){hj.B.dispose.call(this);for(var a=0;a<this.g.length;a++){var b=this.g[a];this.b.removeEventListener(b.eventType,b.listener)}this.g=[]};function ij(){L.call(this);this.b=new N;Jd(this,Aa(Kd,this.b))}
w(ij,L);ij.prototype.subscribe=function(a,b,c){return this.f?0:this.b.subscribe(a,b,c)};
ij.prototype.L=function(a){return this.f?!1:this.b.L(a)};
ij.prototype.l=function(a,b){this.f||this.b.V.apply(this.b,arguments)};function jj(a,b,c){ij.call(this);this.g=a;this.i=b;this.j=c}
w(jj,ij);function Yi(a,b,c){if(!a.f){var d=a.g;d.f||a.i!=d.b||(a={id:a.j,command:b},c&&(a.data=c),d.b.postMessage(Pd(a),d.i))}}
jj.prototype.o=function(){this.i=this.g=null;jj.B.o.call(this)};function kj(a,b,c){L.call(this);this.b=a;this.i=c;this.j=Rf(window,"message",u(this.l,this));this.g=new jj(this,a,b);Jd(this,Aa(Kd,this.g))}
w(kj,L);kj.prototype.l=function(a){var b;if(b=!this.f)if(b=a.origin==this.i)a:{b=this.b;do{var c;b:{c=a.source;do{if(c==b){c=!0;break b}if(c==c.parent)break;c=c.parent}while(null!=c);c=!1}if(c){b=!0;break a}b=b.opener}while(null!=b);b=!1}if(b&&(a=a.data,t(a))){try{a=Nd(a)}catch(d){return}a.command&&(b=this.g,b.f||b.l("command",a.command,a.data))}};
kj.prototype.o=function(){Sf(this.j);this.b=null;kj.B.o.call(this)};function lj(){var a=ib(mj);return new M(function(b,c){a.F=function(a){ff(a)?b(a):c(new nj("Request failed, status="+a.status,"net.badstatus"))};
a.onError=function(){c(new nj("Unknown request error","net.unknown"))};
a.O=function(){c(new nj("Request timed out","net.timeout"))};
nf("//googleads.g.doubleclick.net/pagead/id",a)})}
function nj(a,b){y.call(this,a+", errorCode="+b);this.errorCode=b;this.name="PromiseAjaxError"}
aa(nj,y);function oj(a){y.call(this,a.message||a.description||a.name);this.Sa=a instanceof pj;this.b=a instanceof ce}
w(oj,y);oj.prototype.name="BiscottiError";function pj(){y.call(this,"Biscotti ID is missing from server")}
w(pj,y);pj.prototype.name="BiscottiMissingError";function qj(a,b){this.f=a;this.b=b}
qj.prototype.then=function(a,b,c){try{if(p(this.f))return a?$d(a.call(c,this.f)):$d(this.f);if(p(this.b)){if(!b)return ae(this.b);var d=b.call(c,this.b);return!p(d)&&this.b.b?ae(this.b):$d(d)}throw Error("Invalid Result_ state");}catch(e){return ae(e)}};
Vd(qj);var mj={format:"RAW",method:"GET",timeout:5E3,withCredentials:!0},rj=null;function sj(){if(!rj){var a=u(tj,m,2),b=lj().then(uj);rj=be(b,null,a,void 0)}return rj}
function uj(a){a=a.responseText;if(0!=a.lastIndexOf(")]}'",0))throw new pj;a=JSON.parse(a.substr(4)).id;vj(a);rj=new qj(a);wj(18E5,2);return a}
function tj(a,b){var c=new oj(b);vj("");rj=new qj(void 0,c);0<a&&wj(12E4,a-1);throw c;}
function wj(a,b){R(function(){var a=u(tj,m,b),a=lj().then(uj,a);be(a,null,ma,void 0)},a)}
function vj(a){q("yt.ads.biscotti.lastId_",a,void 0)}
;function xj(a){a.Sa&&yj("")}
function zj(a){!a||r("yt.ads.biscotti.getId_")||r("yt.www.ads.biscotti.getId_")||q("yt.ads.biscotti.getId_",sj,void 0);try{var b;try{var c=r("yt.ads.biscotti.getId_")||r("yt.www.ads.biscotti.getId_");b=c?c():sj()}catch(d){b=ae(d)}b.then(yj,xj);R(zj,18E5)}catch(d){Q(d)}}
var Aj=0;
function yj(a){var b;a:{try{b=window.top.location.href}catch(ba){b=2;break a}b=null!=b?b==window.document.location.href?0:1:2}b={dt:tc,flash:$a||"0",frm:b};b.u_tz=-(new Date).getTimezoneOffset();var c;try{c=x.history.length}catch(ba){c=0}b.u_his=c;b.u_java=!!x.navigator&&"unknown"!==typeof x.navigator.javaEnabled&&!!x.navigator.javaEnabled&&x.navigator.javaEnabled();x.screen&&(b.u_h=x.screen.height,b.u_w=x.screen.width,b.u_ah=x.screen.availHeight,b.u_aw=x.screen.availWidth,b.u_cd=x.screen.colorDepth);x.navigator&&
x.navigator.plugins&&(b.u_nplug=x.navigator.plugins.length);x.navigator&&x.navigator.mimeTypes&&(b.u_nmime=x.navigator.mimeTypes.length);b.bid=a;b.ca_type=Za?"flash":"image";if(S("enable_server_side_search_pyv")||S("enable_server_side_mweb_search_pyv")){var d;a=window;try{d=a.screenX;var e=a.screenY}catch(ba){}try{var f=a.outerWidth,g=a.outerHeight}catch(ba){}try{var h=a.innerWidth,k=a.innerHeight}catch(ba){}d=[a.screenLeft,a.screenTop,d,e,a.screen?a.screen.availWidth:void 0,a.screen?a.screen.availTop:
void 0,f,g,h,k];var n;e=window.top||x;try{var B;if(e.document&&!e.document.body)B=new Pa(-1,-1);else{var H=(e||window).document,ga="CSS1Compat"==H.compatMode?H.documentElement:H.body;B=(new Pa(ga.clientWidth,ga.clientHeight)).round()}n=B}catch(ba){n=new Pa(-12245933,-12245933)}B=0;window.SVGElement&&document.createElementNS&&(B|=1);Ba(b,{bc:B,bih:n.height,biw:n.width,brdim:d.join(),vis:{visible:1,hidden:2,prerender:3,preview:4}[Ca.webkitVisibilityState||Ca.mozVisibilityState||Ca.visibilityState||
""]||0,wgl:!!x.WebGLRenderingContext})}b.bsq=Aj++;tf("//www.youtube.com/ad_data_204",{Na:!1,A:b})}
;function Bj(){this.b=P("ALT_PREF_COOKIE_NAME","PREF");var a=Kc.get(""+this.b,void 0);if(a)for(var a=unescape(a).split("&"),b=0;b<a.length;b++){var c=a[b].split("="),d=c[0];(c=c[1])&&(Z[d]=c.toString())}}
pa(Bj);var Z=r("yt.prefs.UserPrefs.prefs_")||{};q("yt.prefs.UserPrefs.prefs_",Z,void 0);function Cj(a){if(/^f([1-9][0-9]*)$/.test(a))throw Error("ExpectedRegexMatch: "+a);}
function Dj(a){if(!/^\w+$/.test(a))throw Error("ExpectedRegexMismatch: "+a);}
function Ej(a){a=void 0!==Z[a]?Z[a].toString():null;return null!=a&&/^[A-Fa-f0-9]+$/.test(a)?parseInt(a,16):null}
Bj.prototype.get=function(a,b){Dj(a);Cj(a);var c=void 0!==Z[a]?Z[a].toString():null;return null!=c?c:b?b:""};
Bj.prototype.set=function(a,b){Dj(a);Cj(a);if(null==b)throw Error("ExpectedNotNull");Z[a]=b.toString()};
Bj.prototype.remove=function(a){Dj(a);Cj(a);delete Z[a]};
Bj.prototype.clear=function(){Z={}};function Fj(a){for(var b=0;b<a.length;b++){var c=a[b];"send_follow_on_ping_action"==c.name&&c.data&&c.data.follow_on_url&&ah(c.data.follow_on_url)}}
;function Gj(a){T.call(this,1,arguments);this.ia=a}
w(Gj,T);function Hj(a,b){T.call(this,2,arguments);this.f=a;this.b=b}
w(Hj,T);function Ij(a,b,c,d){T.call(this,1,arguments);this.b=b;this.f=c||null;this.itemId=d||null}
w(Ij,T);function Jj(a,b){T.call(this,1,arguments);this.f=a;this.b=b||null}
w(Jj,T);function Kj(a){T.call(this,1,arguments)}
w(Kj,T);var Lj=new U("ypc-core-load",Gj),Mj=new U("ypc-guide-sync-success",Hj),Nj=new U("ypc-purchase-success",Ij),Oj=new U("ypc-subscription-cancel",Kj),Pj=new U("ypc-subscription-cancel-success",Jj),Qj=new U("ypc-init-subscription",Kj);var Rj=!1,Sj=[],Tj=[];function Uj(a){a.b?Rj?V(Ai,a):V(Lj,new Gj(function(){V(Qj,new Kj(a.b))})):Vj(a.f,a.i,a.g,a.source)}
function Wj(a){a.b?Rj?V(Fi,a):V(Lj,new Gj(function(){V(Oj,new Kj(a.b))})):Xj(a.f,a.subscriptionId,a.i,a.g,a.source)}
function Yj(a){Zj(Ka(a.b))}
function ak(a){bk(Ka(a.b))}
function ck(a){dk(a.g,a.f,a.b)}
function ek(a){var b=a.itemId,c=a.b.subscriptionId;b&&c&&V(zi,new si(b,c,a.b.channelInfo))}
function fk(a){var b=a.b;cb(a.f,function(a,d){V(zi,new si(d,a,b[d]))})}
function gk(a){V(Ei,new X(a.f.itemId));a.b&&a.b.length&&(hk(a.b,Ei),hk(a.b,Gi))}
function Vj(a,b,c,d){var e=new X(a);V(xi,e);var f={};f.c=a;c&&(f.eurl=c);d&&(f.source=d);c={};(d=P("PLAYBACK_ID"))&&(c.plid=d);(d=P("EVENT_ID"))&&(c.ei=d);b&&ik(b,c);nf("/subscription_ajax?action_create_subscription_to_channel=1",{method:"POST",pa:f,A:c,F:function(b,c){var d=c.response;V(zi,new si(a,d.id,d.channel_info));d.show_feed_privacy_dialog&&Qe("SHOW-FEED-PRIVACY-SUBSCRIBE-DIALOG",a);d.actions&&Fj(d.actions)},
oa:function(){V(yi,e)}})}
function Xj(a,b,c,d,e){var f=new X(a);V(Ci,f);var g={};d&&(g.eurl=d);e&&(g.source=e);d={};d.c=a;d.s=b;(a=P("PLAYBACK_ID"))&&(d.plid=a);(a=P("EVENT_ID"))&&(d.ei=a);c&&ik(c,d);nf("/subscription_ajax?action_remove_subscriptions=1",{method:"POST",pa:g,A:d,F:function(a,b){var c=b.response;V(Ei,f);c.actions&&Fj(c.actions)},
oa:function(){V(Di,f)}})}
function dk(a,b,c){if(a){var d={};d.channel_id=a;switch(b){case "receive-all-updates":d.receive_all_updates=!0;break;case "receive-no-updates":d.receive_no_updates=!0;d.receive_post_updates=!1;break;case "receive-highlight-updates":d.receive_all_updates=!1;d.receive_no_updates=!1;break;default:return}null===c||d.receive_no_updates||(d.receive_post_updates=c);var e=new qi(a,b,c);nf("/subscription_ajax?action_update_subscription_preferences=1",{method:"POST",A:d,onError:function(){V(Ji,e)},
F:function(){V(Ii,e)}})}}
function Zj(a){if(a.length){var b=Ma(a,0,40);V("subscription-batch-subscribe-loading");hk(b,xi);var c={};c.a=b.join(",");var d=function(){V("subscription-batch-subscribe-loaded");hk(b,yi)};
nf("/subscription_ajax?action_create_subscription_to_all=1",{method:"POST",A:c,F:function(c,f){d();var e=f.response,h=e.id;if(ra(h)&&h.length==b.length){var k=e.channel_info_map;z(h,function(a,c){var d=b[c];V(zi,new si(d,a,k[d]))});
a.length?Zj(a):V("subscription-batch-subscribe-finished")}},
onError:function(){d();V("subscription-batch-subscribe-failure")}})}}
function bk(a){if(a.length){var b=Ma(a,0,40);V("subscription-batch-unsubscribe-loading");hk(b,Ci);var c={};c.c=b.join(",");var d=function(){V("subscription-batch-unsubscribe-loaded");hk(b,Di)};
nf("/subscription_ajax?action_remove_subscriptions=1",{method:"POST",A:c,F:function(){d();hk(b,Ei);a.length&&bk(a)},
onError:function(){d()}})}}
function hk(a,b){z(a,function(a){V(b,new X(a))})}
function ik(a,b){var c=gf(a);Ba(b,c)}
;var jk=null,kk=null,lk=null,mk={};function nk(a){Gg(a.payload_name,a.payload,S("enable_youtubei_innertube")?Jg:ji,void 0,void 0)}
function ok(a){var b=a.id;a=a.ve_type;var c=sg++;a=new rg(void 0,a,c,void 0);mk[b]=a;b=Yg();c=Xg();b&&c&&Og(ni(),b,c,a)}
function pk(a){var b=a.csn;a=a.root_ve_type;if(b&&a&&(O("client-screen-nonce",b),O("ROOT_VE_TYPE",a),a=Xg()))for(var c in mk){var d=b,e=a,f=mk[c];Og(ni(),d,e,f)}}
function qk(a){mk[a.id]=new rg(a.tracking_params)}
function rk(a){var b=Yg();a=mk[a.id];if(b&&a){var c=ni();Pg(c,{click:{csn:b,visualElement:tg(a)}},void 0)}}
function sk(a){a=a.ids;var b=Yg();if(b){for(var c=[],d=0;d<a.length;d++){var e=mk[a[d]];e&&c.push(e)}c.length&&Qg(ni(),b,c)}}
function tk(){var a=jk;a&&a.startInteractionLogging&&a.startInteractionLogging()}
;q("yt.setConfig",O,void 0);q("yt.config.set",O,void 0);q("yt.setMsg",yf,void 0);q("yt.msgs.set",yf,void 0);q("yt.logging.errors.log",uf,void 0);
q("writeEmbed",function(){var a=P("PLAYER_CONFIG",void 0);"1"!=a.privembed&&zj(!0);"gvn"==a.args.ps&&(document.body.style.backgroundColor="transparent");var b=document.referrer,c=P("POST_MESSAGE_ORIGIN");window!=window.top&&b&&b!=document.URL&&(a.args.loaderUrl=b);P("LIGHTWEIGHT_AUTOPLAY")&&(a.args.autoplay="1");a.args.autoplay&&Wi(a.args);jk=a=Xh("player",a);a.addEventListener("onScreenChanged",pk);a.addEventListener("onLogClientVeCreated",ok);a.addEventListener("onLogServerVeCreated",qk);a.addEventListener("onLogToGel",
nk);a.addEventListener("onLogVeClicked",rk);a.addEventListener("onLogVesShown",sk);a.addEventListener("onReady",tk);b=P("POST_MESSAGE_ID","player");P("ENABLE_JS_API")?lk=new hj(a):P("ENABLE_POST_API")&&t(b)&&t(c)&&(kk=new kj(window.parent,b,c),lk=new bj(a,kk.g));P("BG_P")&&(P("BG_I")||P("BG_IU"))&&bf();Df();Y=a;Y.addEventListener("SUBSCRIBE",Mi);Y.addEventListener("UNSUBSCRIBE",Pi);Ki.push(W(zi,Qi),W(Ei,Ri))},void 0);
q("yt.www.watch.ads.restrictioncookie.spr",function(a){ah(a+"mac_204?action_fcts=1");return!0},void 0);
var uk=He(function(){th("ol");Rj=!0;Tj.push(W(wi,Uj),W(Bi,Wj));Rj||Tj.push(W(Ai,Uj),W(Fi,Wj),W(ui,Yj),W(vi,ak),W(Hi,ck),W(Nj,ek),W(Pj,gk),W(Mj,fk));var a=Bj.getInstance(),b=1<window.devicePixelRatio;if(!!((Ej("f"+(Math.floor(119/31)+1))||0)&67108864)!=b){var c="f"+(Math.floor(119/31)+1),d=Ej(c)||0,d=b?d|67108864:d&-67108865;0==d?delete Z[c]:Z[c]=d.toString(16).toString();var a=a.b,b=[],e;for(e in Z)b.push(e+"="+escape(Z[e]));Kc.set(""+a,b.join("&"),63072E3,"/","youtube.com")}}),vk=He(function(){var a=
jk;
a&&a.sendAbandonmentPing&&a.sendAbandonmentPing();P("PL_ATT")&&(af=null);for(var a=0,b=Bf.length;a<b;a++){var c=Bf[a];if(!isNaN(c)){var d=r("yt.scheduler.instance.cancelJob");d?d(c):window.clearTimeout(c)}}Bf.length=0;a=We("//static.doubleclick.net/instream/ad_status.js");if(b=document.getElementById(a))Se(a),b.parentNode.removeChild(b);Cf=!1;O("DCLKSTAT",0);Pe(Sj);Sj.length=0;jh(Tj);Tj.length=0;Rj=!1;Y&&(Y.removeEventListener("SUBSCRIBE",Ni),Y.removeEventListener("UNSUBSCRIBE",Pi));Y=null;jh(Ki);
Ki.length=0;Ld(lk,kk);if(a=jk)a.removeEventListener("onScreenChanged",pk),a.removeEventListener("onLogClientVeCreated",ok),a.removeEventListener("onLogServerVeCreated",qk),a.removeEventListener("onLogToGel",nk),a.removeEventListener("onLogVeClicked",rk),a.removeEventListener("onLogVesShown",sk),a.removeEventListener("onReady",tk),a.destroy();mk={}});
window.addEventListener?(window.addEventListener("load",uk),window.addEventListener("unload",vk)):window.attachEvent&&(window.attachEvent("onload",uk),window.attachEvent("onunload",vk));}).call(this);
