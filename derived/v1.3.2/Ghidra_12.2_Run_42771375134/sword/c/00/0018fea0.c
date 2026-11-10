/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0018fea0; name: FUN_0018fea0
 */


void FUN_0018fea0(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 0xa0));
                    /* try { // try from 0018fec0 to 0018fed3 has its CatchHandler @ 0018ff88 */
  iVar2 = FUN_003ff490(param_1 + 0x18);
  if (iVar2 == 0) {
    FUN_003ff470(param_1 + 0x18);
    uVar4 = (ulong)*(uint *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x98) = 0;
    if (*(uint *)(param_1 + 0x58) != 0) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        while( true ) {
          uVar1 = *(uint *)(param_1 + 0x90);
          if ((*(uint *)(param_1 + 0x94) & 0x7fffffff) <= uVar1) break;
          *(undefined8 *)(*(long *)(param_1 + 0x88) + (ulong)uVar1 * 8) =
               *(undefined8 *)(*(long *)(param_1 + 0x50) + lVar5);
          *(uint *)(param_1 + 0x90) = uVar1 + 1;
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 8;
          if (uVar4 <= uVar6) goto LAB_0018ff48;
        }
                    /* try { // try from 0018ff2c to 0018ff33 has its CatchHandler @ 0018ff8c */
        FUN_001901d0(param_1 + 0x60,*(long *)(param_1 + 0x50) + lVar5);
        uVar4 = (ulong)*(uint *)(param_1 + 0x58);
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 8;
      } while (uVar6 < uVar4);
    }
LAB_0018ff48:
    *(undefined4 *)(param_1 + 0x58) = 0;
                    /* try { // try from 0018ff58 to 0018ff6b has its CatchHandler @ 0018ff88 */
    puVar3 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    (**(code **)*puVar3)(puVar3,param_1);
  }
                    /* try { // try from 0018ff70 to 0018ff73 has its CatchHandler @ 0018ff84 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0xa0));
  return;
}


