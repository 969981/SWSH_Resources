/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cc840; name: FUN_001cc840
 */


void FUN_001cc840(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  FUN_003dc680(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x2028) = 0;
  *(undefined4 *)(param_1 + 0x2038) = 0;
  *(undefined4 *)(param_1 + 0x2048) = 0;
  FUN_003ff570(*(undefined8 *)(param_1 + 0x1fc0),2);
  iVar1 = *(int *)(param_1 + 0x1fd8);
  do {
    uVar4 = (ulong)*(uint *)(param_1 + 0x1fd0);
    do {
      if ((uint)uVar4 <= iVar1 + 2U) {
        *(undefined8 *)(param_1 + 0x1fd8) = 0;
                    /* try { // try from 001cc8e4 to 001cc8e7 has its CatchHandler @ 001cc8f8 */
        FUN_003ff5a0(*(undefined8 *)(param_1 + 0x1fc0));
        return;
      }
      uVar2 = (uint)uVar4 - 1;
      uVar4 = (ulong)uVar2;
      lVar5 = *(long *)(*(long *)(param_1 + 0x1fc8) + uVar4 * 8);
      *(uint *)(param_1 + 0x1fd0) = uVar2;
    } while (lVar5 == 0);
                    /* try { // try from 001cc8c4 to 001cc8d7 has its CatchHandler @ 001cc8fc */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar5);
  } while( true );
}


