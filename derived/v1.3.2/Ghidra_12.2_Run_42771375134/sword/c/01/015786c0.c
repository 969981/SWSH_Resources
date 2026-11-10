/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015786c0; name: FUN_015786c0
 */


void FUN_015786c0(undefined8 param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)FUN_0156d140();
  *puVar1 = 0x643292ca67424269;
  puVar1[1] = "Camera/EvCameraStart";
  puVar1[2] = 0x14;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_01579b60;
  puVar1[5] = &LAB_01579b70;
  puVar1[6] = &LAB_01579b80;
  puVar1[7] = &LAB_01579b90;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x7795743be4e04958;
  puVar1[1] = "Camera/EvCameraEnd";
  puVar1[2] = 0x12;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_01579ba0;
  puVar1[5] = &LAB_01579cd0;
  puVar1[6] = &LAB_01579ce0;
  puVar1[7] = &LAB_01579cf0;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x6368f53d359d9152;
  puVar1[1] = "Camera/EvCameraWait";
  puVar1[2] = 0x13;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[0x35];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    (*pcVar2)(puVar1 + 0x38);
  }
  puVar1[0x38] = param_1;
  puVar1[0x34] = &LAB_01579d00;
  puVar1[0x35] = &LAB_01579d80;
  puVar1[0x36] = &LAB_01579d90;
  puVar1[0x37] = &LAB_01579da0;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xd211db84c5b82ed2;
  puVar1[1] = "Camera/EvCameraMove";
  puVar1[2] = 0x13;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_01579db0;
  puVar1[5] = &LAB_0157a0b0;
  puVar1[6] = &LAB_0157a0c0;
  puVar1[7] = &LAB_0157a0d0;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xab13e993bd4ef315;
  puVar1[1] = "Camera/EvCameraMoveOffset";
  puVar1[2] = 0x19;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157a0e0;
  puVar1[5] = &LAB_0157a300;
  puVar1[6] = &LAB_0157a310;
  puVar1[7] = &LAB_0157a320;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xab715936638cdb23;
  puVar1[1] = "Camera/EvCameraMoveOffsetLookAt";
  puVar1[2] = 0x1f;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157a330;
  puVar1[5] = &LAB_0157a550;
  puVar1[6] = &LAB_0157a560;
  puVar1[7] = &LAB_0157a570;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x5e8af98eb43974a4;
  puVar1[1] = "Camera/EvCameraMoveOffsetChr";
  puVar1[2] = 0x1c;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157a580;
  puVar1[5] = &LAB_0157a800;
  puVar1[6] = &LAB_0157a810;
  puVar1[7] = &LAB_0157a820;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x7cc36dff4fd8d528;
  puVar1[1] = "Camera/EvCameraMoveOffsetChrPair";
  puVar1[2] = 0x20;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157a830;
  puVar1[5] = &LAB_0157ab90;
  puVar1[6] = &LAB_0157aba0;
  puVar1[7] = &LAB_0157abb0;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xca6707dd9df05f56;
  puVar1[1] = "Camera/EvCameraMoveDist";
  puVar1[2] = 0x17;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157abc0;
  puVar1[5] = &LAB_0157ae50;
  puVar1[6] = &LAB_0157ae60;
  puVar1[7] = &LAB_0157ae70;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xe6ef421f1e1ef9d5;
  puVar1[1] = "Camera/EvCameraMoveDistChr";
  puVar1[2] = 0x1a;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157ae80;
  puVar1[5] = &LAB_0157b190;
  puVar1[6] = &LAB_0157b1a0;
  puVar1[7] = &LAB_0157b1b0;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xac58e07f7c0a2dcb;
  puVar1[1] = "Camera/EvCameraMoveDistChrEasy";
  puVar1[2] = 0x1e;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157b1c0;
  puVar1[5] = &LAB_0157b440;
  puVar1[6] = &LAB_0157b450;
  puVar1[7] = &LAB_0157b460;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xa275ea13c6a34d9;
  puVar1[1] = "Camera/EvCameraMoveDistRateChrEasy";
  puVar1[2] = 0x22;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157b470;
  puVar1[5] = &LAB_0157b6f0;
  puVar1[6] = &LAB_0157b700;
  puVar1[7] = &LAB_0157b710;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x6fc55a90639fca7b;
  puVar1[1] = "Camera/EvCameraMoveDistChrEasyPair";
  puVar1[2] = 0x22;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157b720;
  puVar1[5] = &LAB_0157ba90;
  puVar1[6] = &LAB_0157baa0;
  puVar1[7] = &LAB_0157bab0;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xf0820e9b7ac03365;
  puVar1[1] = "Camera/EvCameraMoveDistRateChrEasyPair";
  puVar1[2] = 0x26;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157bac0;
  puVar1[5] = &LAB_0157be30;
  puVar1[6] = &LAB_0157be40;
  puVar1[7] = &LAB_0157be50;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xb01375a1eed3568c;
  puVar1[1] = "Camera/EvCameraShakeInX";
  puVar1[2] = 0x17;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157be60;
  puVar1[5] = &LAB_0157c250;
  puVar1[6] = &LAB_0157c260;
  puVar1[7] = &LAB_0157c270;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xb01376a1eed3583f;
  puVar1[1] = "Camera/EvCameraShakeInY";
  puVar1[2] = 0x17;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157c280;
  puVar1[5] = &LAB_0157c670;
  puVar1[6] = &LAB_0157c680;
  puVar1[7] = &LAB_0157c690;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xb01377a1eed359f2;
  puVar1[1] = "Camera/EvCameraShakeInZ";
  puVar1[2] = 0x17;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157c6a0;
  puVar1[5] = &LAB_0157ca90;
  puVar1[6] = &LAB_0157caa0;
  puVar1[7] = &LAB_0157cab0;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x47639da1b3521b84;
  puVar1[1] = "Camera/EvCameraShakeEnd";
  puVar1[2] = 0x17;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157cac0;
  puVar1[5] = &LAB_0157caf0;
  puVar1[6] = &LAB_0157cb00;
  puVar1[7] = &LAB_0157cb10;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x4d2bc5faf19eac9f;
  puVar1[1] = "Camera/EvCameraShakeStartAttenuation";
  puVar1[2] = 0x24;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157cb20;
  puVar1[5] = &LAB_0157ccc0;
  puVar1[6] = &LAB_0157ccd0;
  puVar1[7] = &LAB_0157cce0;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x6368f53d359d9152;
  puVar1[1] = "Camera/EvCameraWait";
  puVar1[2] = 0x13;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[0x35];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    (*pcVar2)(puVar1 + 0x38);
  }
  puVar1[0x38] = param_1;
  puVar1[0x34] = &LAB_0157ccf0;
  puVar1[0x35] = &LAB_0157cd70;
  puVar1[0x36] = &LAB_0157cd80;
  puVar1[0x37] = &LAB_0157cd90;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x761e2fd87e8da2ec;
  puVar1[1] = "Camera/EvCameraHandShake";
  puVar1[2] = 0x18;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157cda0;
  puVar1[5] = &LAB_0157d090;
  puVar1[6] = &LAB_0157d0a0;
  puVar1[7] = &LAB_0157d0b0;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x3a4fcd7462635e1f;
  puVar1[1] = "Camera/EvCameraShakeEndAll";
  puVar1[2] = 0x1a;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157d0c0;
  puVar1[5] = &LAB_0157d1a0;
  puVar1[6] = &LAB_0157d1b0;
  puVar1[7] = &LAB_0157d1c0;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x1f07d6857ac996a1;
  puVar1[1] = "Camera/EvCameraHandShakeEnd";
  puVar1[2] = 0x1b;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157d1d0;
  puVar1[5] = &LAB_0157d270;
  puVar1[6] = &LAB_0157d280;
  puVar1[7] = &LAB_0157d290;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x1f07d6857ac996a1;
  puVar1[1] = "Camera/EvCameraHandShakeEnd";
  puVar1[2] = 0x1b;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157d2a0;
  puVar1[5] = &LAB_0157d340;
  puVar1[6] = &LAB_0157d350;
  puVar1[7] = &LAB_0157d360;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x710b6877220c2378;
  puVar1[1] = "Camera/EvCameraPresetSingle";
  puVar1[2] = 0x1b;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157d370;
  puVar1[5] = &LAB_0157d780;
  puVar1[6] = &LAB_0157d790;
  puVar1[7] = &LAB_0157d7a0;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x11a941b706fa570c;
  puVar1[1] = "Camera/EvCameraPreset";
  puVar1[2] = 0x15;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157d7b0;
  puVar1[5] = &LAB_0157dc50;
  puVar1[6] = &LAB_0157dc60;
  puVar1[7] = &LAB_0157dc70;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xba84e7b3ca984956;
  puVar1[1] = "Camera/PfxDofInit";
  puVar1[2] = 0x11;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157dc80;
  puVar1[5] = &LAB_0157dd90;
  pcVar2 = (code *)puVar1[0x35];
  puVar1[6] = &LAB_0157dda0;
  puVar1[7] = &LAB_0157ddb0;
  if (pcVar2 != (code *)0x0) {
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    (*pcVar2)(puVar1 + 0x38);
  }
  puVar1[0x38] = param_1;
  puVar1[0x34] = &LAB_0157ddc0;
  puVar1[0x35] = &LAB_0157de40;
  puVar1[0x36] = &LAB_0157de50;
  puVar1[0x37] = &LAB_0157de60;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xa118ed15fe6fbe98;
  puVar1[1] = "Camera/PfxDofStart";
  puVar1[2] = 0x12;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157de70;
  puVar1[5] = &LAB_0157e0e0;
  puVar1[6] = &LAB_0157e0f0;
  puVar1[7] = &LAB_0157e100;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xbb59bdff00fd1e69;
  puVar1[1] = "Camera/PfxDofEnd";
  puVar1[2] = 0x10;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157e110;
  puVar1[5] = &LAB_0157e330;
  pcVar2 = (code *)puVar1[0x35];
  puVar1[6] = &LAB_0157e340;
  puVar1[7] = &LAB_0157e350;
  if (pcVar2 != (code *)0x0) {
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    (*pcVar2)(puVar1 + 0x38);
  }
  puVar1[0x38] = param_1;
  puVar1[0x34] = &LAB_0157e360;
  puVar1[0x35] = &LAB_0157e3e0;
  puVar1[0x36] = &LAB_0157e3f0;
  puVar1[0x37] = &LAB_0157e400;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xb23677b248849176;
  puVar1[1] = "Camera/PfxDofEndInstance";
  puVar1[2] = 0x18;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157e410;
  puVar1[5] = &LAB_0157e480;
  puVar1[6] = &LAB_0157e490;
  puVar1[7] = &LAB_0157e4a0;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xb42431dd6cfe8525;
  puVar1[1] = "Camera/PfxDofWait";
  puVar1[2] = 0x11;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[0x35];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    (*pcVar2)(puVar1 + 0x38);
  }
  puVar1[0x38] = param_1;
  puVar1[0x34] = &LAB_0157e4b0;
  puVar1[0x35] = &LAB_0157e530;
  puVar1[0x36] = &LAB_0157e540;
  puVar1[0x37] = &LAB_0157e550;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xbdd53f241f6baae1;
  puVar1[1] = "Camera/PfxDofCharaStart";
  puVar1[2] = 0x17;
  if (puVar1[3] != 0) {
    (**(code **)(*(long *)(puVar1[3] + 0x48) + 0x18))();
    puVar1[3] = 0;
  }
  pcVar2 = (code *)puVar1[5];
  puVar1[3] = 0;
  if (pcVar2 != (code *)0x0) {
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    (*pcVar2)(puVar1 + 8);
  }
  puVar1[8] = param_1;
  puVar1[4] = &LAB_0157e560;
  puVar1[5] = &LAB_0157e840;
  puVar1[6] = &LAB_0157e850;
  puVar1[7] = &LAB_0157e860;
  return;
}


