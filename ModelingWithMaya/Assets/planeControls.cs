using UnityEngine;
using System.Collections;

public class planeControls : MonoBehaviour {

	public float speed = 10;
	public float turnSpeed = 10;
	public float yawAmount = 25;

	private Rigidbody rb;

	void Start () {
		rb = GetComponent<Rigidbody> ();  //makes the entire script quicker, especially when adding a lot more components to get in the future. for performance reasons.
	}
	//Fixed update instead of update
	void FixedUpdate () {
		float turnAmount = Input.GetAxis ("Horizontal") * turnSpeed;
					
		float yaw = Input.GetAxis("Horizontal")*-yawAmount;

		Vector3 rotationAmount = new Vector3 (transform.rotation.eulerAngles.x, transform.rotation.eulerAngles.y + turnAmount, yaw);
		
		transform.rotation = Quaternion.Euler (rotationAmount);

		rb.velocity = transform.forward * speed;

	}
}
