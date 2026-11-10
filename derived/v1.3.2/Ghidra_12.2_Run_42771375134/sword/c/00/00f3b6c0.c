/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f3b6c0; name: FUN_00f3b6c0
 */


/* WARNING: Removing unreachable block (ram,0x00f3b7b4) */

void FUN_00f3b6c0(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 local_50 [16];
  undefined8 ***apppuStack_40 [2];
  undefined8 ****local_28;
  
  apppuStack_40[1] = (undefined8 ***)param_3;
  if (param_4 == 0) {
    puVar5 = local_50;
    uVar6 = 1;
  }
  else {
    uVar6 = (ulong)(*(int *)(param_4 + 0x10) + 1);
    puVar5 = (undefined1 *)((long)apppuStack_40 - (uVar6 * 8 + 0xf & 0xffffffff0));
    lVar2 = *(long *)(param_4 + 8);
    if (param_4 == lVar2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      do {
        *(undefined8 *)(puVar5 + uVar3 * 8) = *(undefined8 *)(lVar2 + 0x10);
        lVar2 = *(long *)(lVar2 + 8);
        uVar1 = (int)uVar3 + 1;
        uVar3 = (ulong)uVar1;
      } while (param_4 != lVar2);
      uVar3 = (ulong)uVar1;
    }
    local_28 = apppuStack_40 + 1;
    FUN_00f3b820(puVar5,puVar5 + uVar3 * 8,&local_28);
  }
  *(undefined8 ****)(puVar5 + (ulong)((int)uVar6 - 1) * 8) = apppuStack_40[1];
  uVar3 = param_2[1] - *param_2 >> 3;
  if (uVar6 < uVar3 || uVar6 - uVar3 == 0) {
    if (uVar6 < uVar3) {
      param_2[1] = *param_2 + uVar6 * 8;
    }
  }
  else {
    FUN_00f3cf90(param_2,uVar6 - uVar3);
  }
  if ((int)uVar6 != 0) {
    if (uVar6 == 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      do {
        lVar4 = lVar2 * 8;
        lVar2 = lVar2 + 2;
        *(undefined8 *)(*param_2 + lVar4) = *(undefined8 *)(puVar5 + lVar4);
        *(undefined8 *)(*param_2 + lVar4 + 8) = *(undefined8 *)((long)(puVar5 + lVar4) + 8);
      } while (uVar6 - (uVar6 & 1) != lVar2);
      if ((uVar6 & 1) == 0) {
        return;
      }
    }
    *(undefined8 *)(*param_2 + lVar2 * 8) = *(undefined8 *)(puVar5 + lVar2 * 8);
  }
  return;
}


