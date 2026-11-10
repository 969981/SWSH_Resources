/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0156fd90; name: FUN_0156fd90
 */


void FUN_0156fd90(undefined8 param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)FUN_0156d140();
  *puVar1 = 0xf036bea6fd8bb81e;
  puVar1[1] = "Other/TimeWait";
  puVar1[2] = 0xe;
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
  puVar1[4] = &LAB_01570090;
  puVar1[5] = &LAB_01570130;
  pcVar2 = (code *)puVar1[0x35];
  puVar1[6] = &LAB_01570140;
  puVar1[7] = &LAB_01570150;
  if (pcVar2 != (code *)0x0) {
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    (*pcVar2)(puVar1 + 0x38);
  }
  puVar1[0x38] = param_1;
  puVar1[0x34] = &LAB_01570160;
  puVar1[0x35] = &LAB_015701e0;
  puVar1[0x36] = &LAB_015701f0;
  puVar1[0x37] = &LAB_01570200;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x969bca82bf35c5aa;
  puVar1[1] = "Other/PlaceNameDisp";
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
  puVar1[4] = &LAB_01570210;
  puVar1[5] = &LAB_01570280;
  puVar1[6] = &LAB_01570290;
  puVar1[7] = &LAB_015702a0;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xd67b693fb2694782;
  puVar1[1] = "Other/FieldPlacementSelectParamSet";
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
  puVar1[4] = &LAB_015702b0;
  puVar1[5] = &LAB_01570490;
  puVar1[6] = &LAB_015704a0;
  puVar1[7] = &LAB_015704b0;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xc8a19ada94a2d8a5;
  puVar1[1] = "Other/FieldPlacementSelectParamReset";
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
  puVar1[4] = &LAB_015704c0;
  puVar1[5] = &LAB_01570530;
  puVar1[6] = &LAB_01570540;
  puVar1[7] = &LAB_01570550;
  return;
}


