/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f8b40; name: FUN_003f8b40
 */


void FUN_003f8b40(long param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined2 *puVar4;
  long lVar5;
  short sVar6;
  undefined4 local_38;
  undefined2 local_34;
  
  iVar1 = *param_2;
  if (*(int *)(param_1 + 0x48) == 6) {
    local_34 = *(undefined2 *)(param_1 + 0x7e);
    lVar5 = *(long *)(param_1 + 0x70);
    sVar6 = *(short *)(param_1 + 0x78);
    local_38 = *(undefined4 *)(param_1 + 0x7a);
  }
  else if (*(int *)(param_1 + 0x48) == 5) {
    local_34 = *(undefined2 *)(param_1 + 0x96);
    lVar5 = *(long *)(param_1 + 0x88);
    sVar6 = *(short *)(param_1 + 0x90);
    local_38 = *(undefined4 *)(param_1 + 0x92);
  }
  else {
    sVar6 = 0;
    lVar5 = 0;
  }
                    /* try { // try from 003f8bac to 003f8c0f has its CatchHandler @ 003f8c6c */
  FUN_0029a430();
  if (iVar1 - 5U < 2) {
    plVar2 = (long *)(param_1 + 0x88);
    if (iVar1 != 5) {
      plVar2 = (long *)(param_1 + 0x70);
    }
    if (sVar6 == 0) {
                    /* try { // try from 003f8c14 to 003f8c3b has its CatchHandler @ 003f8c68 */
      plVar3 = (long *)FUN_00400d30();
      puVar4 = (undefined2 *)
               (**(code **)(*plVar3 + 0x10))
                         (plVar3,2,"NonTrackedAlloc","./../../GeomUtils/src\\GuGeometryUnion.h",0x67
                         );
      *plVar2 = (long)puVar4;
      *(undefined2 *)(plVar2 + 1) = 1;
      *puVar4 = *(undefined2 *)(param_1 + 0x42);
      *(undefined1 *)(param_1 + 0x41) = 1;
    }
    else {
      *plVar2 = lVar5;
      *(short *)(plVar2 + 1) = sVar6;
      *(undefined2 *)((long)plVar2 + 0xe) = local_34;
      *(undefined4 *)((long)plVar2 + 10) = local_38;
    }
  }
  else if (((sVar6 != 0) && (lVar5 != 0)) && (*(char *)(param_1 + 0x41) != '\0')) {
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  return;
}


