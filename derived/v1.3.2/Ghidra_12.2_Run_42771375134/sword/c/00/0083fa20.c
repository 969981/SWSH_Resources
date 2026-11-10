/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083fa20; name: FUN_0083fa20
 */


void FUN_0083fa20(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *local_38;
  
  uVar1 = FUN_00825b90(param_1,*(undefined4 *)(param_2 + 0x38),param_2,&local_38);
  puVar4 = local_38;
  if ((uVar1 & 1) != 0) {
    *(char *)(local_38 + 1) = (char)*(undefined4 *)(param_2 + 0x3c);
    *(undefined1 *)((long)local_38 + 9) = 1;
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) {
      plVar2 = operator_new(0x18);
      plVar2[1] = 0;
      plVar2[2] = 0;
      *plVar2 = 0;
    }
    else {
      plVar2 = (long *)FUN_0080efb0(lVar3,0,0x18);
      plVar2[1] = 0;
      plVar2[2] = 0;
      *plVar2 = lVar3;
      FUN_0080eeb0(lVar3,plVar2,PTR_LAB_02717198);
      puVar4 = local_38;
    }
    *puVar4 = plVar2;
  }
  FUN_00829780(*local_38,param_3);
  return;
}


