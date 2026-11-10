/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0156eb40; name: FUN_0156eb40
 */


void FUN_0156eb40(undefined8 param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)FUN_0156d140();
  *puVar1 = 0x8c056005ef239d04;
  puVar1[1] = "Item/ItemEvent";
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
  puVar1[4] = FUN_0156ef30;
  puVar1[5] = &LAB_0156f1a0;
  pcVar2 = (code *)puVar1[0x35];
  puVar1[6] = &LAB_0156f1b0;
  puVar1[7] = &LAB_0156f1c0;
  if (pcVar2 != (code *)0x0) {
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    (*pcVar2)(puVar1 + 0x38);
  }
  puVar1[0x38] = param_1;
  puVar1[0x34] = &LAB_0156f1d0;
  puVar1[0x35] = &LAB_0156f250;
  puVar1[0x36] = &LAB_0156f260;
  puVar1[0x37] = &LAB_0156f270;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0x8082016c1efaf3cb;
  puVar1[1] = "Item/ItemEventUnique";
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
  puVar1[4] = &LAB_0156f280;
  puVar1[5] = &LAB_0156f580;
  pcVar2 = (code *)puVar1[0x35];
  puVar1[6] = &LAB_0156f590;
  puVar1[7] = &LAB_0156f5a0;
  if (pcVar2 != (code *)0x0) {
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    (*pcVar2)(puVar1 + 0x38);
  }
  puVar1[0x38] = param_1;
  puVar1[0x34] = &LAB_0156f5b0;
  puVar1[0x35] = &LAB_0156f630;
  puVar1[0x36] = &LAB_0156f640;
  puVar1[0x37] = &LAB_0156f650;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xbb636e278a20cbf6;
  puVar1[1] = "Item/ItemEventWithMotion";
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
  puVar1[4] = &LAB_0156f660;
  puVar1[5] = &LAB_0156f9f0;
  pcVar2 = (code *)puVar1[0x35];
  puVar1[6] = &LAB_0156fa00;
  puVar1[7] = &LAB_0156fa10;
  if (pcVar2 != (code *)0x0) {
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    (*pcVar2)(puVar1 + 0x38);
  }
  puVar1[0x38] = param_1;
  puVar1[0x34] = &LAB_0156fa20;
  puVar1[0x35] = &LAB_0156faa0;
  puVar1[0x36] = &LAB_0156fab0;
  puVar1[0x37] = &LAB_0156fac0;
  puVar1 = (undefined8 *)FUN_0156d140(param_1);
  *puVar1 = 0xec11fba0eeed7df8;
  puVar1[1] = "Item/LicenseCardEvent";
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
  puVar1[4] = &LAB_0156fad0;
  puVar1[5] = &LAB_0156fcb0;
  pcVar2 = (code *)puVar1[0x35];
  puVar1[6] = &LAB_0156fcc0;
  puVar1[7] = &LAB_0156fcd0;
  if (pcVar2 != (code *)0x0) {
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    (*pcVar2)(puVar1 + 0x38);
  }
  puVar1[0x38] = param_1;
  puVar1[0x34] = &LAB_0156fce0;
  puVar1[0x35] = &LAB_0156fd60;
  puVar1[0x36] = &LAB_0156fd70;
  puVar1[0x37] = &LAB_0156fd80;
  return;
}


