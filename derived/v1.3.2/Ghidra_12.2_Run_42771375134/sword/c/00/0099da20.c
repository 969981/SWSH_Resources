/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099da20; name: FUN_0099da20
 */


void FUN_0099da20(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 local_88;
  undefined8 local_80;
  long lStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  char local_48 [8];
  
  iVar2 = FUN_0093b420(param_3[2]);
  if (iVar2 == 0) {
    FUN_009423b0(param_1);
    FUN_009366b0();
    return;
  }
  uVar3 = FUN_00880d20(*(undefined4 *)*param_3);
  uVar1 = FUN_00880d80(*(undefined4 *)*param_3);
  FUN_0093b2e0(param_3[2]);
  lVar4 = FUN_0093b2f0(param_3[2]);
  if (lVar4 != 0) {
    bVar6 = false;
    do {
      FUN_008ec700(uVar1,param_3[1],&local_88);
      local_80 = param_3[1];
      local_60 = 0;
      local_5c = 0;
      local_58 = 0x101;
      local_56 = 0;
      local_68 = local_88;
      lStack_78 = lVar4;
      local_70 = uVar3;
      FUN_00942450(param_1);
      uVar5 = FUN_00925400();
      FUN_00967420(uVar5,local_48,&local_80);
      if (local_48[0] != '\0') {
        lVar4 = FUN_00942400(param_1);
        FUN_0093af10(lVar4 + 0x10);
        bVar6 = true;
      }
      lVar4 = FUN_0093b2f0(param_3[2]);
    } while (lVar4 != 0);
    if (bVar6) {
      return;
    }
  }
  lVar4 = FUN_00942400(param_1);
  if (*(char *)(lVar4 + 0x34) == '\0') {
    FUN_009423b0(param_1);
    FUN_009366b0();
  }
  return;
}


