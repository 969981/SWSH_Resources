/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e8210; name: FUN_003e8210
 */


void FUN_003e8210(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined1 auStack_258 [512];
  undefined1 local_58;
  undefined1 *local_50;
  ulong local_48;
  undefined1 auStack_38 [8];
  
  puVar5 = (undefined8 *)FUN_003bd8a0(param_2);
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 0x1170) == 0) {
    local_48 = 0x4000000000;
    local_50 = auStack_258;
    local_58 = 1;
                    /* try { // try from 003e8304 to 003e831b has its CatchHandler @ 003e841c */
    FUN_003e78e0(param_1,puVar5,auStack_258,param_3,param_4 & 1);
    puVar4 = local_50;
    if ((-1 < (long)local_48) && ((local_48 & 0x7fffffff00000000) != 0)) {
      if (auStack_258 == local_50) {
        local_58 = 0;
        cVar3 = *(char *)(puVar5[10] + 0xd);
        goto joined_r0x003e8410;
      }
      if (local_50 != (undefined1 *)0x0) {
                    /* try { // try from 003e8340 to 003e8353 has its CatchHandler @ 003e8418 */
        plVar6 = (long *)FUN_00400d30();
        (**(code **)(*plVar6 + 0x18))(plVar6,puVar4);
      }
    }
  }
  else {
    FUN_003e78e0(param_1,puVar5,*(long *)(param_1 + 0x1170),param_3,param_4 & 1);
  }
  cVar3 = *(char *)(puVar5[10] + 0xd);
joined_r0x003e8410:
  if ((cVar3 != '\x04') && ((*(byte *)(puVar5[0x11] + 0x1c) >> 5 & 1) != 0)) {
    lVar8 = (ulong)(*(uint *)(puVar5 + 0x16) >> 0xb) * 4;
    *(uint *)(*(long *)(param_1 + 0x1f70) + lVar8) =
         *(uint *)(*(long *)(param_1 + 0x1f70) + lVar8) &
         (1 << (ulong)(*(uint *)(puVar5 + 0x16) >> 6 & 0x1f) ^ 0xffffffffU);
  }
  piVar11 = *(int **)(param_1 + 0x1148);
  (**(code **)*puVar5)(puVar5);
  if ((char)piVar11[8] == '\0') {
    iVar7 = piVar11[6];
  }
  else {
    FUN_003f1c40(*(undefined8 *)(piVar11 + 4),piVar11[6],auStack_258,auStack_38,0x20);
    iVar7 = piVar11[6];
  }
  iVar7 = iVar7 + -1;
  if (-1 < iVar7) {
    iVar9 = 0;
    do {
      uVar2 = iVar7 + iVar9 >> 1;
      puVar10 = *(undefined8 **)(*(long *)(piVar11 + 4) + (ulong)uVar2 * 0x18);
      puVar1 = (undefined8 *)((long)puVar10 + (ulong)(uint)(*piVar11 * piVar11[1]));
      if ((puVar10 <= puVar5 && puVar5 <= puVar1) && (puVar5 < puVar10 || puVar1 != puVar5)) {
        lVar8 = *(long *)(piVar11 + 4) + (ulong)uVar2 * 0x18;
        *puVar5 = *(undefined8 *)(lVar8 + 8);
        *(undefined8 **)(lVar8 + 8) = puVar5;
        if ((char)piVar11[8] != '\0') {
          piVar11[2] = uVar2;
        }
        *(undefined1 *)(piVar11 + 8) = 0;
        break;
      }
      if (puVar10 < puVar5) {
        iVar9 = uVar2 + 1;
      }
      else {
        iVar7 = uVar2 - 1;
      }
    } while (iVar9 <= iVar7);
  }
  *(int *)(param_1 + 0x1294) = *(int *)(param_1 + 0x1294) + -1;
  return;
}


