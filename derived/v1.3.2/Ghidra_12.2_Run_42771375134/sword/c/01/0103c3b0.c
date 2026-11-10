/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103c3b0; name: FUN_0103c3b0
 */


ulong FUN_0103c3b0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined8 local_48;
  
  param_1 = param_1 + 0x170;
  uVar1 = FUN_012b4090(param_1);
  if (((uVar1 & 1) != 0) && (lVar2 = FUN_012b40f0(param_1), lVar2 != 0)) {
    uVar1 = 0;
    do {
      uVar3 = FUN_012b4090(param_1);
      if ((uVar3 & 1) == 0) {
        if (param_2 == 0) {
          return uVar1;
        }
      }
      else {
        FUN_012b4190(auStack_70,param_1,(long)(int)uVar1);
        local_88 = 0x24312a27509e058c;
        puStack_80 = &DAT_01cebaa4;
        local_78 = 3;
        FUN_012b4250(auStack_60,auStack_70,&local_88);
        local_48 = 0;
        lVar2 = FUN_012b4b40(auStack_60,&local_48);
        if (lVar2 == param_2) {
          return uVar1;
        }
      }
      uVar1 = (ulong)((int)uVar1 + 1);
      uVar3 = FUN_012b40f0(param_1);
    } while (uVar1 < uVar3);
  }
  return 0xffffffff;
}


