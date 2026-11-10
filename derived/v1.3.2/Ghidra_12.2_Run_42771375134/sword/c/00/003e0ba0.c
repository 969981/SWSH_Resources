/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e0ba0; name: FUN_003e0ba0
 */


void FUN_003e0ba0(long param_1,undefined4 param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  
  lVar10 = *(long *)(param_1 + 0x728);
  iVar2 = *(int *)(lVar10 + 0x160);
  uVar5 = *(undefined8 *)(lVar10 + 0x158);
  *(int *)(*(long *)(param_1 + 0x720) + 0xa2c) =
       *(int *)(*(long *)(param_1 + 0x720) + 0xa2c) + iVar2;
  FUN_003cd2f0(*(undefined8 *)(param_1 + 0x1048),uVar5,iVar2,param_2);
  iVar2 = *(int *)(lVar10 + 0x170);
  uVar5 = *(undefined8 *)(lVar10 + 0x168);
  *(int *)(*(long *)(param_1 + 0x720) + 0xa2c) =
       *(int *)(*(long *)(param_1 + 0x720) + 0xa2c) + iVar2;
  FUN_003cd2f0(*(undefined8 *)(param_1 + 0x1048),uVar5,iVar2,param_2);
  iVar2 = *(int *)(lVar10 + 0x180);
  uVar5 = *(undefined8 *)(lVar10 + 0x178);
  *(int *)(*(long *)(param_1 + 0x720) + 0xa2c) =
       *(int *)(*(long *)(param_1 + 0x720) + 0xa2c) + iVar2;
  FUN_003cd2f0(*(undefined8 *)(param_1 + 0x1048),uVar5,iVar2,param_2);
  uVar7 = *(uint *)(lVar10 + 0x150);
  lVar10 = *(long *)(lVar10 + 0x148);
  if ((*(uint *)(param_1 + 0x1f2c) & 0x7fffffff) == 0) {
    FUN_003f7ea0(param_1 + 0x1f20,1);
    uVar3 = *(uint *)(param_1 + 0x1f3c);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x1f3c);
  }
  if ((uVar3 & 0x7fffffff) == 0) {
    FUN_003f8000(param_1 + 0x1f30,1);
    uVar3 = *(uint *)(param_1 + 0x1f4c);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x1f4c);
  }
  if ((uVar3 & 0x7fffffff) == 0) {
    FUN_003f8160(param_1 + 8000,1);
  }
  lVar6 = *(long *)(param_1 + 0x720);
  *(undefined4 *)(param_1 + 0x1f28) = 1;
  *(undefined4 *)(param_1 + 0x1f38) = 1;
  *(undefined4 *)(param_1 + 0x1f48) = 1;
  *(uint *)(lVar6 + 0xa2c) = *(int *)(lVar6 + 0xa2c) + uVar7;
  *(undefined4 *)(param_1 + 0x1d08) = 1;
  *(long **)(param_1 + 0x1d00) = param_3;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x20))(param_3);
    *(undefined8 *)(param_1 + 0x1cf8) = *(undefined8 *)(*(long *)(param_1 + 0x1d00) + 0x10);
    lVar6 = *(long *)(param_1 + 0x720);
  }
  puVar11 = *(undefined8 **)(lVar6 + 0x7b0);
  *(undefined4 *)(param_1 + 0x1f58) = 0;
  *(undefined4 *)(param_1 + 0x1f68) = 0;
  if ((*(uint *)(param_1 + 0x1f6c) & 0x7fffffff) < uVar7) {
    FUN_003f82c0(param_1 + 0x1f60,uVar7);
    *(uint *)(param_1 + 0x1f68) = uVar7;
  }
  else {
    *(uint *)(param_1 + 0x1f68) = uVar7;
    if (uVar7 == 0) {
      (**(code **)(**(long **)(param_1 + 0x1cf8) + 0xa0))
                (*(long **)(param_1 + 0x1cf8),param_1 + 0x1ce8);
      return;
    }
  }
  puVar1 = PTR_DAT_02712910 + 0x10;
  if (0x1ff < uVar7) {
    uVar7 = 0x200;
  }
  FUN_003ff570(*puVar11);
                    /* try { // try from 003e0d2c to 003e0d3f has its CatchHandler @ 003e0eb4 */
  plVar4 = (long *)FUN_001a6400(puVar11,0xd8,0x10);
                    /* try { // try from 003e0d44 to 003e0d47 has its CatchHandler @ 003e0eb0 */
  FUN_003ff5a0(*puVar11);
  lVar6 = *(long *)(param_1 + 0x1f60);
  lVar8 = *(long *)(param_1 + 0x18);
  lVar9 = *(long *)(param_1 + 0x1048);
  plVar4[2] = 0;
  plVar4[3] = 0;
  *(undefined4 *)(plVar4 + 4) = 0;
  *plVar4 = (long)puVar1;
  plVar4[1] = lVar8;
  plVar4[5] = lVar9;
  plVar4[6] = lVar10;
  *(uint *)(plVar4 + 7) = uVar7;
  *(undefined4 *)(plVar4 + 0x1a) = 0;
  plVar4[0x18] = lVar6;
  plVar4[0x19] = 0;
                    /* try { // try from 003e0d80 to 003e0d9b has its CatchHandler @ 003e0ecc */
                    /* WARNING: Subroutine does not return */
  memset((void *)((long)plVar4 + 0x3c),0,0x40);
}


