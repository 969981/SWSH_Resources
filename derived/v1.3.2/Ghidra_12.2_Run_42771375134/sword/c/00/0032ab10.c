/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0032ab10; name: FUN_0032ab10
 */


void FUN_0032ab10(long *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  char *local_388;
  undefined1 local_380;
  uint7 uStack_37f;
  
  lVar3 = *param_1;
  puVar4 = (uint *)(lVar3 + 0x10);
  uVar5 = *puVar4;
  if (uVar5 != 0) {
    if (*(char *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_1[1] + 0x20))
                ((long *)param_1[1],
                 *(undefined8 *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - 1) * 0x10));
      lVar3 = *param_1;
      puVar4 = (uint *)(lVar3 + 0x10);
      uVar5 = *puVar4;
      *(undefined1 *)(*(long *)(lVar3 + 8) + (ulong)(uVar5 - 1) * 0x10 + 8) = 1;
    }
  }
  local_388 = "PxArticulationLink";
  local_380 = 0;
  if (uVar5 < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 8) + (ulong)uVar5 * 0x10);
    puVar1[1] = (ulong)uStack_37f << 8;
    *puVar1 = "PxArticulationLink";
    *puVar4 = *puVar4 + 1;
    lVar3 = *param_1;
    iVar2 = *(int *)(lVar3 + 0x10);
  }
  else {
    FUN_00327960(lVar3,&local_388);
    lVar3 = *param_1;
    iVar2 = *(int *)(lVar3 + 0x10);
  }
  if (iVar2 != 0) {
    if (*(char *)(*(long *)(lVar3 + 8) + (ulong)(iVar2 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_1[1] + 0x20))
                ((long *)param_1[1],
                 *(undefined8 *)(*(long *)(lVar3 + 8) + (ulong)(iVar2 - 1) * 0x10));
      *(undefined1 *)(*(long *)(*param_1 + 8) + (ulong)(*(int *)(*param_1 + 0x10) - 1) * 0x10 + 8) =
           1;
    }
  }
  lVar3 = param_1[5];
  if ((*(int *)(lVar3 + 0x3c) != 0) &&
     (uVar6 = (param_2 << 0x20 ^ 0xffffffffffffffffU) + param_2, uVar6 = uVar6 ^ uVar6 >> 0x16,
     uVar6 = uVar6 + (uVar6 << 0xd ^ 0xffffffffffffffff), uVar6 = (uVar6 ^ uVar6 >> 8) * 9,
     uVar6 = uVar6 ^ uVar6 >> 0xf, uVar6 = uVar6 + (uVar6 << 0x1b ^ 0xffffffffffffffff),
     uVar5 = *(uint *)(*(long *)(lVar3 + 0x20) +
                      (ulong)(*(int *)(lVar3 + 0x2c) - 1U & ((uint)(uVar6 >> 0x1f) ^ (uint)uVar6)) *
                      4), uVar5 != 0xffffffff)) {
    do {
      uVar6 = (ulong)uVar5;
      if (*(long *)(*(long *)(lVar3 + 0x10) + uVar6 * 0x10) == param_2) {
        if (*(long *)(lVar3 + 0x10) + uVar6 * 0x10 != 0) {
                    /* WARNING: Subroutine does not return */
          memset(&local_388,0,0x80);
        }
        break;
      }
      uVar5 = *(uint *)(*(long *)(lVar3 + 0x18) + uVar6 * 4);
    } while (uVar5 != 0xffffffff);
  }
                    /* WARNING: Subroutine does not return */
  memset(&local_388,0,0x80);
}


