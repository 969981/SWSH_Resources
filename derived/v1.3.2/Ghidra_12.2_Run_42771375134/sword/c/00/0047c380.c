/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047c380; name: FUN_0047c380
 */


int FUN_0047c380(byte param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  undefined1 auStack_70 [4];
  undefined4 local_6c;
  
  puVar2 = PTR_DAT_02712e28;
  lVar6 = *(long *)(PTR_DAT_02713240 + 0x10);
  if (lVar6 == 0) {
    iVar3 = 1;
  }
  else {
    puVar1 = PTR_DAT_02713208 + 0x10;
    iVar5 = 1;
    do {
      if (*(int *)(lVar6 + 0x120) == 0) {
        iVar3 = 1;
      }
      else {
        plVar4 = (long *)FUN_00404690(*(undefined4 *)puVar2,0x28);
        if (plVar4 == (long *)0x0) {
          iVar3 = 0x34;
        }
        else {
          plVar4[3] = 0;
          plVar4[4] = 0;
          plVar4[1] = 0;
          plVar4[2] = 0;
          *plVar4 = 0;
          FUN_004a5bd0(plVar4);
          *plVar4 = (long)puVar1;
          plVar4[2] = 0;
          plVar4[3] = 0x2b00000000;
          *(undefined4 *)(plVar4 + 4) = 0;
          local_6c = *(undefined4 *)(lVar6 + 100);
          iVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,0,0,0,auStack_70);
          if (iVar3 == 1) {
            FUN_00462550(lVar6 + 0x98);
            *(long **)(lVar6 + 0xf8) = plVar4;
            *(undefined4 *)(lVar6 + 0x3c) = local_6c;
            *(undefined4 *)(lVar6 + 0x120) = 0;
            *(undefined4 *)(lVar6 + 0x18) = 0xb5;
          }
        }
      }
      lVar6 = *(long *)(lVar6 + 8);
      if (iVar3 == 1 || iVar5 != 1) {
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
    } while (lVar6 != 0);
  }
  FUN_004c5bc0(0);
  *PTR_DAT_02712ec0 = iVar3 == 1;
  *PTR_DAT_02712ed0 = param_1 & 1;
  if ((param_1 & 1) != 0) {
    nn::os::SignalEvent((EventType *)PTR_DAT_02713228);
  }
  return iVar3;
}


