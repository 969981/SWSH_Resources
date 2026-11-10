/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0156de90; name: FUN_0156de90
 */


void FUN_0156de90(undefined8 param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)FUN_0156d140();
  *puVar1 = 0x327396f7d8bb8a9d;
  puVar1[1] = "Fade/FadeIn";
  puVar1[2] = 0xb;
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
  puVar1[4] = FUN_0156e1d0;
  puVar1[5] = &LAB_0156e370;
  puVar1[6] = &LAB_0156e380;
  puVar1[7] = &LAB_0156e390;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x84b0b4254e49ff06;
  puVar1[1] = "Fade/FadeOut";
  puVar1[2] = 0xc;
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
  puVar1[4] = &LAB_0156e3a0;
  puVar1[5] = &LAB_0156e620;
  puVar1[6] = &LAB_0156e630;
  puVar1[7] = &LAB_0156e640;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xf080d6d3e983c67e;
  puVar1[1] = "Fade/FadeInFrame";
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
  puVar1[4] = &LAB_0156e650;
  puVar1[5] = &LAB_0156e7d0;
  puVar1[6] = &LAB_0156e7e0;
  puVar1[7] = &LAB_0156e7f0;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x475a11596723a297;
  puVar1[1] = "Fade/FadeOutFrame";
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
  puVar1[4] = &LAB_0156e800;
  puVar1[5] = &LAB_0156ea60;
  puVar1[6] = &LAB_0156ea70;
  puVar1[7] = &LAB_0156ea80;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xda175e9f65f6c1c7;
  puVar1[1] = "Fade/FadeWait";
  puVar1[2] = 0xd;
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
  puVar1[0x34] = &LAB_0156ea90;
  puVar1[0x35] = &LAB_0156eb10;
  puVar1[0x36] = &LAB_0156eb20;
  puVar1[0x37] = &LAB_0156eb30;
  return;
}


