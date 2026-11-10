/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e1e70; name: FUN_005e1e70
 */


void FUN_005e1e70(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = (long)(PTR_DAT_027142a0 + 0x10);
  FUN_005e1ff0();
  puVar1 = PTR_DAT_027142c0 + 0x10;
  param_1[0x4a] = (long)puVar1;
  FUN_005e32f0(param_1 + 0x4a);
  puVar2 = PTR_DAT_027142b8 + 0x10;
  param_1[0x40] = (long)puVar2;
  FUN_005e3100(param_1 + 0x40);
  param_1[0x36] = (long)puVar1;
  FUN_005e32f0(param_1 + 0x36);
  param_1[0x2c] = (long)puVar2;
  FUN_005e3100(param_1 + 0x2c);
  FUN_005e21d0(param_1 + 0x21);
  param_1[0x16] = (long)(PTR_DAT_027142b0 + 0x10);
  plVar3 = param_1 + 0x1b;
  if (((*(byte *)(param_1 + 0x1f) & 1) == 0) && (lVar4 = *plVar3, lVar4 != 0)) {
    plVar5 = (long *)param_1[0x17];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x50))(plVar5,lVar4);
      (**(code **)(*plVar5 + 0x48))(plVar5,lVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar3 = 0;
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1f] = 0;
  *plVar3 = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0xc] = (long)(PTR_DAT_027142a8 + 0x10);
  plVar3 = param_1 + 0x11;
  if (((*(byte *)(param_1 + 0x15) & 1) == 0) && (lVar4 = *plVar3, lVar4 != 0)) {
    plVar5 = (long *)param_1[0xd];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x50))(plVar5,lVar4);
      (**(code **)(*plVar5 + 0x48))(plVar5,lVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar3 = 0;
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x15] = 0;
  *plVar3 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_005bf750(param_1 + 1);
  return;
}


