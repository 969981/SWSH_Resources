/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c7b40; name: FUN_008c7b40
 */


undefined8 FUN_008c7b40(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint local_54;
  undefined1 auStack_50 [16];
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar2 = FUN_015200a0(lVar4,param_2,&local_54);
  if (local_54 != 0) {
    uVar6 = 0;
    do {
      uVar3 = *(uint *)(lVar2 + uVar6 * 4);
      if ((uVar3 & 0x7fff) == 0) break;
      if (**(int **)(param_1 + 0x5f0) - 1U < 2) {
        FUN_008885c0(auStack_50,uVar3 & 0x7fff);
        iVar1 = FUN_00888630(auStack_50,0x19);
        FUN_00888620(auStack_50);
        if (iVar1 != 0) {
          uVar3 = *(uint *)(lVar2 + uVar6 * 4);
          goto LAB_008c7bf0;
        }
      }
      else {
LAB_008c7bf0:
        if ((uVar3 >> 0x1e & 1) != 0) {
          uVar5 = 1;
          if (lVar4 == 0) {
            return 1;
          }
          goto LAB_008c7c0c;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_54);
  }
  uVar5 = 0;
  if (lVar4 != 0) {
LAB_008c7c0c:
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return uVar5;
}


