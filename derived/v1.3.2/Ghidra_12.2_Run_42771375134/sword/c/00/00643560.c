/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00643560; name: FUN_00643560
 */


void FUN_00643560(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_027149c0 + 0x10);
  plVar1 = (long *)FUN_005cbff0();
  (**(code **)(*plVar1 + 0x110))(plVar1,param_1 + 0x57);
  FUN_00644140(param_1);
  param_1[0x57] = (long)(PTR_DAT_027149b8 + 0x10);
  FUN_005bf750(param_1 + 0x58);
  param_1[0x2e] = (long)(PTR_DAT_027149e0 + 0x10);
  plVar1 = param_1 + 0x33;
  if (((*(byte *)(param_1 + 0x37) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = (long *)param_1[0x2f];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x37] = 0;
  plVar2 = param_1 + 0x29;
  *plVar1 = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x24] = (long)(PTR_DAT_027149d8 + 0x10);
  if (((*(byte *)(param_1 + 0x2d) & 1) == 0) && (lVar3 = *plVar2, lVar3 != 0)) {
    plVar1 = (long *)param_1[0x25];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x50))(plVar1,lVar3);
      (**(code **)(*plVar1 + 0x48))(plVar1,lVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar2 = 0;
  }
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2d] = 0;
  *plVar2 = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x11] = (long)(PTR_DAT_027149d0 + 0x10);
  plVar1 = param_1 + 0x16;
  if (((*(byte *)(param_1 + 0x1a) & 1) == 0) && (lVar3 = *plVar1, lVar3 != 0)) {
    plVar2 = (long *)param_1[0x12];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x50))(plVar2,lVar3);
      (**(code **)(*plVar2 + 0x48))(plVar2,lVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar1 = 0;
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x1a] = 0;
  *plVar1 = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[6] = (long)(PTR_DAT_027149c8 + 0x10);
  plVar1 = param_1 + 0xb;
  if (((*(byte *)(param_1 + 0xf) & 1) == 0) && (lVar3 = *plVar1, lVar3 != 0)) {
    plVar2 = (long *)param_1[7];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x50))(plVar2,lVar3);
      (**(code **)(*plVar2 + 0x48))(plVar2,lVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar1 = 0;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xf] = 0;
  *plVar1 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_005bf750(param_1 + 1);
  return;
}


