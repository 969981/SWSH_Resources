/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cde40; name: FUN_003cde40
 */


void FUN_003cde40(long param_1,long param_2,uint param_3,undefined8 param_4,uint param_5)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long local_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  uVar3 = *(uint *)(param_2 + 0x18) >> 0x1d & 3;
  if (uVar3 == 1) {
    uVar5 = (ulong)*(ushort *)(param_2 + 0x4a);
    if (uVar5 != 0) {
      lVar2 = *(long *)(param_2 + 0x40);
      do {
        FUN_003cd9e0(param_1,*(undefined8 *)(lVar2 + uVar5 * 8 + -8),param_3 | 1,0,1,param_4,
                     param_5 & 1);
        uVar5 = uVar5 - 1;
      } while ((int)uVar5 != 0);
    }
  }
  else if (uVar3 == 0) {
    local_58 = *(long *)(*(long *)(param_2 + 0x10) + 0x28);
    lStack_50 = local_58 + (ulong)*(uint *)(*(long *)(param_2 + 0x10) + 0x34) * 8;
    local_48 = param_2;
    lVar2 = FUN_003c67f0(&local_58);
    if (lVar2 != 0) {
      do {
        FUN_003cd9e0(param_1,lVar2,param_3 | 3,0,1,param_4,param_5 & 1);
        lVar2 = FUN_003c67f0(&local_58);
      } while (lVar2 != 0);
    }
    if ((*(int *)(param_1 + 0x14cc) != 0) &&
       (uVar5 = (param_2 << 0x20 ^ 0xffffffffffffffffU) + param_2, uVar5 = uVar5 ^ uVar5 >> 0x16,
       uVar5 = uVar5 + (uVar5 << 0xd ^ 0xffffffffffffffff), uVar5 = (uVar5 ^ uVar5 >> 8) * 9,
       uVar5 = uVar5 ^ uVar5 >> 0xf, uVar5 = uVar5 + (uVar5 << 0x1b ^ 0xffffffffffffffff),
       uVar3 = *(uint *)(*(long *)(param_1 + 0x14b0) +
                        (ulong)(*(int *)(param_1 + 0x14bc) - 1U &
                               ((uint)(uVar5 >> 0x1f) ^ (uint)uVar5)) * 4), uVar3 != 0xffffffff)) {
      lVar2 = *(long *)(param_1 + 0x14a0);
      do {
        uVar5 = (ulong)uVar3;
        if (*(long *)(lVar2 + (ulong)uVar3 * 0x18) == param_2) {
          if (lVar2 + uVar5 * 0x18 == 0) {
            return;
          }
          puVar1 = *(undefined8 **)(lVar2 + uVar5 * 0x18 + 0x10);
          while (puVar1 != (undefined8 *)0x0) {
            FUN_003b8570(*puVar1,param_2);
            puVar4 = (undefined8 *)puVar1[1];
            *(int *)(param_1 + 0x1484) = *(int *)(param_1 + 0x1484) + -1;
            *puVar1 = *(undefined8 *)(param_1 + 0x1490);
            *(undefined8 **)(param_1 + 0x1490) = puVar1;
            puVar1 = puVar4;
          }
          local_60 = param_2;
          FUN_003d73c0(param_1 + 0x1498,&local_60);
          return;
        }
        uVar3 = *(uint *)(*(long *)(param_1 + 0x14a8) + uVar5 * 4);
      } while (uVar3 != 0xffffffff);
    }
  }
  return;
}


