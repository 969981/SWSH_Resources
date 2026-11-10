/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099e340; name: FUN_0099e340
 */


void FUN_0099e340(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  char local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  FUN_0093b2e0(param_3[3]);
  lVar1 = FUN_0093b2f0(param_3[3]);
  if (lVar1 != 0) {
    bVar3 = false;
    do {
      local_50 = param_3[1];
      uStack_48 = param_3[2];
      local_34 = 1;
      local_38 = *(undefined4 *)*param_3;
      local_40 = lVar1;
      FUN_00942450(param_1);
      uVar2 = FUN_00925e40();
      FUN_00966da0(uVar2,local_58,&local_50);
      if (local_58[0] != '\0') {
        lVar1 = FUN_00942400(param_1);
        FUN_0093af10(lVar1 + 0x10);
        bVar3 = true;
      }
      lVar1 = FUN_0093b2f0(param_3[3]);
    } while (lVar1 != 0);
    if (bVar3) {
      return;
    }
  }
  lVar1 = FUN_00942400(param_1);
  if (*(char *)(lVar1 + 0x34) == '\0') {
    FUN_009423b0(param_1);
    FUN_009366b0();
  }
  return;
}


