/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ac2c0; name: FUN_003ac2c0
 */


/* WARNING: Removing unreachable block (ram,0x003ac310) */

undefined8 FUN_003ac2c0(long *param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long local_40;
  ulong uStack_38;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_003ad680(&local_40,(int)param_2[1],&uStack_28);
  uVar1 = *(uint *)(param_2 + 1);
  uVar3 = (ulong)uVar1;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      do {
        lVar5 = lVar4 * 8;
        *(undefined8 *)(local_40 + lVar5) = *(undefined8 *)(*(long *)(*param_2 + lVar5) + 0x58);
        lVar4 = lVar4 + 2;
        *(undefined8 *)(local_40 + lVar5 + 8) =
             *(undefined8 *)(*(long *)(*param_2 + lVar5 + 8) + 0x58);
      } while (uVar3 - (uVar3 & 1) != lVar4);
      if ((uVar1 & 1) == 0) goto LAB_003ac378;
    }
    *(undefined8 *)(local_40 + lVar4 * 8) = *(undefined8 *)(*(long *)(*param_2 + lVar4 * 8) + 0x58);
  }
LAB_003ac378:
                    /* try { // try from 003ac384 to 003ac393 has its CatchHandler @ 003ac3cc */
  uVar2 = (**(code **)(*param_1 + 0x20))(param_1,local_40,uVar3,param_3);
  if ((-1 < (long)uStack_38) && ((uStack_38 & 0x7fffffff00000000) != 0)) {
                    /* try { // try from 003ac3a8 to 003ac3af has its CatchHandler @ 003ac3c8 */
    FUN_00401ce0(&local_40,local_40);
  }
  return uVar2;
}


