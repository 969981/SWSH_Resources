/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00320140; name: FUN_00320140
 */


void FUN_00320140(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char local_18 [4];
  int local_14;
  
  puVar5 = (undefined8 *)(param_2 + -0x10);
  *puVar5 = 0;
  local_14 = *(int *)(param_2 + -8);
  if ((*(int *)(param_1 + 0x5c) != 0) &&
     (uVar3 = local_14 + (local_14 << 0xf ^ 0xffffffffU), uVar3 = (uVar3 ^ uVar3 >> 10) * 9,
     uVar3 = uVar3 ^ uVar3 >> 6, uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff),
     uVar3 = *(uint *)(*(long *)(param_1 + 0x40) +
                      (ulong)(*(int *)(param_1 + 0x4c) - 1U & (uVar3 ^ uVar3 >> 0x10)) * 4),
     uVar3 != 0xffffffff)) {
    lVar2 = *(long *)(param_1 + 0x30);
    do {
      uVar4 = (ulong)uVar3;
      if (*(int *)(lVar2 + uVar4 * 0x10) == local_14) {
        if (lVar2 + uVar4 * 0x10 != 0) {
          lVar2 = lVar2 + uVar4 * 0x10;
          *puVar5 = *(undefined8 *)(lVar2 + 8);
          *(undefined8 **)(lVar2 + 8) = puVar5;
          return;
        }
        break;
      }
      uVar3 = *(uint *)(*(long *)(param_1 + 0x38) + uVar4 * 4);
    } while (uVar3 != 0xffffffff);
  }
  piVar1 = (int *)FUN_00320230(param_1 + 0x20,&local_14,local_18);
  if (local_18[0] == '\0') {
    *piVar1 = local_14;
    *(undefined8 **)(piVar1 + 2) = puVar5;
    return;
  }
  return;
}


