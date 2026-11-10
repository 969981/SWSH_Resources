/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006372b0; name: FUN_006372b0
 */


void FUN_006372b0(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_02714620 + 0x128;
  *param_1 = (long)(PTR_DAT_02714620 + 0x10);
  param_1[1] = (long)puVar1;
  FUN_00638e20(param_1 + 2);
  param_1[4] = param_3;
  param_1[5] = 0;
  plVar4 = param_1 + 0xc;
  param_1[6] = (long)param_2;
  param_1[7] = (long)plVar4;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x40;
  param_1[0xb] = 1;
  if (param_2 == (long *)0x0) {
    lVar3 = FUN_005bc740();
    if (lVar3 == 0) {
      lVar3 = FUN_005bc6f0();
    }
    else {
      lVar3 = FUN_005bc740();
    }
    plVar4 = (long *)param_1[7];
    param_1[6] = lVar3;
  }
  *(undefined1 *)plVar4 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x22) = 1;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((long)param_1 + 300) = 0xffffffff00000001;
  param_1[0x2a] = 0;
  param_1[0x2e] = (long)(PTR_DAT_02714628 + 0x10);
  param_1[0x2f] = (long)param_2;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 8;
  param_1[0x33] = 0;
  if (param_2 == (long *)0x0) {
    param_2 = (long *)FUN_005bc6f0();
    bVar2 = (*(byte *)(param_1 + 0x37) & 1) == 0;
    param_1[0x2f] = (long)param_2;
  }
  else {
    bVar2 = true;
  }
  param_1[0x15] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 10;
  param_1[0x2b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  if (bVar2) {
    lVar3 = param_1[0x33];
    if (lVar3 != 0) {
      if (param_2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x48))
                  (param_2,lVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      param_1[0x33] = 0;
    }
  }
  param_1[0x30] = 0;
  param_1[0x31] = 3;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x33] = (long)(param_1 + 0x2b);
  param_1[0x37] = 1;
  return;
}


