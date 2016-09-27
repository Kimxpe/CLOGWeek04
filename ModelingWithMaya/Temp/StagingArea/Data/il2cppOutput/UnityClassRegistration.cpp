struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 82 classes
	//0. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//1. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//6. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//7. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//8. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//9. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//10. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//11. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//12. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//13. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//14. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//15. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//16. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//17. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//18. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//19. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//20. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//21. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//22. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//23. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//24. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//25. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//26. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//27. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//28. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//29. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//30. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//31. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//32. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//33. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//34. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//35. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//36. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//37. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//38. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//39. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//40. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//41. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//42. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//43. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//44. TrailRenderer
	void RegisterClass_TrailRenderer();
	RegisterClass_TrailRenderer();

	//45. ParticleRenderer
	void RegisterClass_ParticleRenderer();
	RegisterClass_ParticleRenderer();

	//46. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//47. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//48. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//49. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//50. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//51. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//52. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//53. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//54. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//55. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//56. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//57. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//58. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//59. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//60. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//61. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//62. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//63. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//64. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//65. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//66. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//67. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//68. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//69. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//70. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//71. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//72. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//73. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//74. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//75. TerrainCollider
	void RegisterClass_TerrainCollider();
	RegisterClass_TerrainCollider();

	//76. TerrainData
	void RegisterClass_TerrainData();
	RegisterClass_TerrainData();

	//77. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//78. Terrain
	void RegisterClass_Terrain();
	RegisterClass_Terrain();

	//79. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//80. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//81. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
