/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00505bb0; name: FUN_00505bb0
 */


undefined4 FUN_00505bb0(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  ushort *local_68;
  uint local_60;
  undefined1 local_58;
  
  puVar4 = PTR_DAT_027138a8;
  puVar3 = PTR_DAT_02712e28;
  iVar5 = *(int *)(param_1 + 0x90);
  if (iVar5 < 3) {
LAB_00505bfc:
    uVar1 = *(uint *)(param_1 + 0x68);
    if (uVar1 != 0) {
      if (1 < iVar5) goto LAB_00505ca0;
      uVar7 = *(uint *)(param_1 + 0x130);
      uVar9 = *(uint *)(param_1 + 0x104);
      uVar2 = uVar9 - uVar7;
      if (uVar7 <= uVar9 && uVar2 != 0) {
        if (uVar2 <= uVar1) {
          uVar1 = uVar2;
        }
        memcpy((void *)(*(long *)(param_1 + 0x128) + (ulong)uVar7),*(void **)(param_1 + 0x60),
               (ulong)uVar1);
        uVar7 = *(int *)(param_1 + 0x130) + uVar1;
        *(ulong *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + (ulong)uVar1;
        *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - uVar1;
        *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar1;
        uVar9 = *(uint *)(param_1 + 0x104);
        *(uint *)(param_1 + 0x130) = uVar7;
      }
      if (uVar7 != uVar9) goto LAB_00505c94;
      *(undefined4 *)(param_1 + 0x90) = 2;
      iVar5 = FUN_00505320(param_1);
      if (iVar5 < 0x2e) goto LAB_00505cb0;
      while (iVar5 != 0x2e) {
        if (iVar5 == 0x34) {
          return 2;
        }
        while( true ) {
          local_68 = *(ushort **)(param_1 + 0x138) + 1;
          local_60 = (uint)**(ushort **)(param_1 + 0x138);
          local_58 = 0;
          lVar6 = FUN_00504760(puVar4,param_1 + 0x88,*(undefined8 *)(param_1 + 0x18),&local_68);
          *(long *)(param_1 + 0xb0) = lVar6;
          if (lVar6 == 0) {
            return 2;
          }
          *(undefined4 *)(param_1 + 0x90) = 3;
          if ((*(char *)(param_1 + 0x148) == '\0') || (*(long *)(param_1 + 0x138) == 0))
          goto LAB_00505d20;
          FUN_004047f0(*(undefined4 *)puVar3);
          *(undefined1 *)(param_1 + 0x148) = 0;
          *(long *)(param_1 + 0x138) = 0;
          *(undefined8 *)(param_1 + 0x140) = 0;
LAB_00505c94:
          iVar5 = *(int *)(param_1 + 0x90);
          if (iVar5 != 2) {
            if (2 < iVar5) goto LAB_00505d20;
            goto LAB_00505bfc;
          }
LAB_00505ca0:
          iVar5 = FUN_00505320(param_1);
          if (0x2d < iVar5) break;
LAB_00505cb0:
          if (iVar5 == 2) {
            return 2;
          }
          if (iVar5 == 0x11) {
            return 2;
          }
        }
      }
    }
    uVar8 = 0x3f;
  }
  else {
LAB_00505d20:
    iVar5 = FUN_00506370(param_1 + 0x98,*(undefined1 *)(param_1 + 0xe8));
    uVar8 = 1;
    if (iVar5 != 0) {
      uVar8 = 2;
    }
  }
  return uVar8;
}


