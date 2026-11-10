/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00acd8e0; name: FUN_00acd8e0
 */


void FUN_00acd8e0(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  if (*(char *)(param_1 + 0x550) != '\0') {
    uVar9 = 0x32;
    if (*(int *)(param_1 + 0x4d0) != 1) {
      uVar9 = 0;
    }
    lVar2 = FUN_00ad1430();
    iVar4 = *(int *)(param_1 + 0x554);
    if (lVar2 != 0) {
      uVar9 = 0x32;
    }
    *(int *)(param_1 + 0x554) = iVar4 + 1;
    if (0x3b < iVar4) {
      puVar3 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      uVar5 = *puVar3;
      uVar7 = puVar3[1];
      do {
        uVar8 = uVar5 ^ uVar7;
        iVar6 = (int)uVar7;
        iVar4 = (int)uVar5;
        uVar7 = uVar8 >> 0x1b | uVar8 << 0x25;
        uVar5 = uVar8 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar8 << 0x10;
        uVar1 = iVar4 + iVar6 & 0x3ff;
      } while (999 < uVar1);
      *puVar3 = uVar5;
      puVar3[1] = uVar7;
      if (uVar1 < uVar9) {
        if (*(int *)(param_1 + 0x4d0) == 2) {
          FUN_00ad3610(param_1,2);
        }
        else {
          local_68 = 0x955705ca742e78cc;
          local_60 = "ba_think01";
          local_58 = 10;
          FUN_006cf0a0(auStack_50,&local_68);
          FUN_00ad3010(param_1,auStack_50,0);
          if (local_38 != 0) {
            (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          }
        }
      }
      *(undefined4 *)(param_1 + 0x554) = 0;
    }
  }
  return;
}


