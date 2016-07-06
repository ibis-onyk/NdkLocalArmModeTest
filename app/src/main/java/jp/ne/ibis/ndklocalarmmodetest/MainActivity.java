package jp.ne.ibis.ndklocalarmmodetest;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends Activity {
	private TextView textView1;

	private native String getTextNative();

	static {
		System.loadLibrary("nativelib");
	}

	public MainActivity() {
		super();
		textView1 = null;
	}

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		textView1 = (TextView)findViewById(R.id.textView1);
		textView1.setText(getTextNative());
	}
}
