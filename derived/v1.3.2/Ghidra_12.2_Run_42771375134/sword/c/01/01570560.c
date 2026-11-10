/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01570560; name: FUN_01570560
 */


void FUN_01570560(undefined8 param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)FUN_0156d140();
  *puVar1 = 0x4198cae25a564ce;
  puVar1[1] = "Sound/SoundPostEvent";
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
  puVar1[4] = &LAB_01570ae0;
  puVar1[5] = &LAB_01570ba0;
  puVar1[6] = &LAB_01570bb0;
  puVar1[7] = &LAB_01570bc0;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x113096f2ec4eeae9;
  puVar1[1] = "Sound/SoundWait";
  puVar1[2] = 0xf;
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
  puVar1[4] = &LAB_01570bd0;
  puVar1[5] = &LAB_01570bf0;
  pcVar2 = (code *)puVar1[0x35];
  puVar1[6] = &LAB_01570c00;
  puVar1[7] = &LAB_01570c10;
  if (pcVar2 != (code *)0x0) {
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    (*pcVar2)(puVar1 + 0x38);
  }
  puVar1[0x38] = param_1;
  puVar1[0x34] = &LAB_01570c20;
  puVar1[0x35] = &LAB_01570ca0;
  puVar1[0x36] = &LAB_01570cb0;
  puVar1[0x37] = &LAB_01570cc0;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x55513288a9686184;
  puVar1[1] = "Sound/SoundSetSwitch";
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
  puVar1[4] = &LAB_01570cd0;
  puVar1[5] = &LAB_01570e30;
  puVar1[6] = &LAB_01570e40;
  puVar1[7] = &LAB_01570e50;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x5a554c4773b2ff6b;
  puVar1[1] = "Sound/SoundSetRTPC";
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
  puVar1[4] = &LAB_01570e60;
  puVar1[5] = &LAB_01570ff0;
  puVar1[6] = &LAB_01571000;
  puVar1[7] = &LAB_01571010;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xa17c44ef8e418b32;
  puVar1[1] = "Sound/SoundPostTrigger";
  puVar1[2] = 0x16;
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
  puVar1[4] = &LAB_01571020;
  puVar1[5] = &LAB_015710e0;
  puVar1[6] = &LAB_015710f0;
  puVar1[7] = &LAB_01571100;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x2741e910048e4afd;
  puVar1[1] = "Sound/SoundSetState";
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
  puVar1[4] = &LAB_01571110;
  puVar1[5] = &LAB_01571270;
  puVar1[6] = &LAB_01571280;
  puVar1[7] = &LAB_01571290;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xc375f5aa2468453b;
  puVar1[1] = "Sound/SoundPlayPokeVoice";
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
  puVar1[4] = &LAB_015712a0;
  puVar1[5] = &LAB_01571470;
  puVar1[6] = &LAB_01571480;
  puVar1[7] = &LAB_01571490;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xefa0412603d5c634;
  puVar1[1] = "Sound/SoundPlayPokeVoiceFromObject";
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
  puVar1[4] = &LAB_015714a0;
  puVar1[5] = &LAB_015715c0;
  puVar1[6] = &LAB_015715d0;
  puVar1[7] = &LAB_015715e0;
  return;
}


