/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e7e60; name: FUN_003e7e60
 */


void FUN_003e7e60(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined1 auStack_258 [512];
  undefined1 local_58;
  undefined1 *local_50;
  ulong local_48;
  undefined1 auStack_38 [8];
  
  lVar4 = FUN_003fefc0(param_2);
  if (lVar4 != 0) {
    if (*(long *)(param_1 + 0x1170) == 0) {
      local_48 = 0x4000000000;
      local_50 = auStack_258;
      local_58 = 1;
                    /* try { // try from 003e7f24 to 003e7f3b has its CatchHandler @ 003e802c */
      FUN_003e78e0(param_1,lVar4,auStack_258,param_3,param_4 & 1);
      puVar3 = local_50;
      if ((-1 < (long)local_48) && ((local_48 & 0x7fffffff00000000) != 0)) {
        if (auStack_258 == local_50) {
          local_58 = 0;
        }
        else if (local_50 != (undefined1 *)0x0) {
                    /* try { // try from 003e7f60 to 003e7f73 has its CatchHandler @ 003e8028 */
          plVar6 = (long *)FUN_00400d30();
          (**(code **)(*plVar6 + 0x18))(plVar6,puVar3);
        }
      }
    }
    else {
      FUN_003e78e0(param_1,lVar4,*(long *)(param_1 + 0x1170),param_3,param_4 & 1);
    }
    piVar10 = *(int **)(param_1 + 0x1140);
    puVar5 = (undefined8 *)FUN_003fefc0(param_2);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5);
      if ((char)piVar10[8] == '\0') {
        iVar7 = piVar10[6];
      }
      else {
        FUN_003f1c40(*(undefined8 *)(piVar10 + 4),piVar10[6],auStack_258,auStack_38,0x20);
        iVar7 = piVar10[6];
      }
      iVar7 = iVar7 + -1;
      if (-1 < iVar7) {
        iVar8 = 0;
        do {
          uVar2 = iVar7 + iVar8 >> 1;
          puVar9 = *(undefined8 **)(*(long *)(piVar10 + 4) + (ulong)uVar2 * 0x18);
          puVar1 = (undefined8 *)((long)puVar9 + (ulong)(uint)(*piVar10 * piVar10[1]));
          if ((puVar9 <= puVar5 && puVar5 <= puVar1) && (puVar5 < puVar9 || puVar1 != puVar5)) {
            lVar4 = *(long *)(piVar10 + 4) + (ulong)uVar2 * 0x18;
            *puVar5 = *(undefined8 *)(lVar4 + 8);
            *(undefined8 **)(lVar4 + 8) = puVar5;
            if ((char)piVar10[8] != '\0') {
              piVar10[2] = uVar2;
            }
            *(undefined1 *)(piVar10 + 8) = 0;
            break;
          }
          if (puVar9 < puVar5) {
            iVar8 = uVar2 + 1;
          }
          else {
            iVar7 = uVar2 - 1;
          }
        } while (iVar8 <= iVar7);
      }
    }
    *(int *)(param_1 + 0x1290) = *(int *)(param_1 + 0x1290) + -1;
  }
  return;
}


