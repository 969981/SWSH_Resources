/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ac400; name: FUN_003ac400
 */


undefined8 FUN_003ac400(long *param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long local_50;
  ulong local_48;
  long local_40;
  ulong local_38;
  undefined8 local_28;
  
  local_38 = 0;
  local_50 = 0;
  local_40 = 0;
  FUN_003ad680(&local_40,(int)param_2[1],&local_50);
  local_28 = 0;
  local_50 = 0;
  local_48 = 0;
                    /* try { // try from 003ac444 to 003ac44f has its CatchHandler @ 003ac538 */
  FUN_003adb30(&local_50,(int)param_2[1],&local_28);
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      lVar4 = uVar3 * 8;
      *(long *)(local_50 + lVar4) = *(long *)(*param_2 + lVar4) + 0x2b0;
      uVar3 = uVar3 + 1;
      *(undefined8 *)(local_40 + lVar4) = *(undefined8 *)(*(long *)(*param_2 + lVar4) + 0x58);
    } while (uVar3 < uVar1);
  }
                    /* try { // try from 003ac4a8 to 003ac4b7 has its CatchHandler @ 003ac510 */
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1,local_40,local_50,local_48 & 0xffffffff,param_3);
  if ((-1 < (long)local_48) && ((local_48 & 0x7fffffff00000000) != 0)) {
                    /* try { // try from 003ac4cc to 003ac4d3 has its CatchHandler @ 003ac50c */
    FUN_00401ce0(&local_50,local_50);
  }
  if ((-1 < (long)local_38) && ((local_38 & 0x7fffffff00000000) != 0)) {
                    /* try { // try from 003ac4e8 to 003ac4ef has its CatchHandler @ 003ac508 */
    FUN_00401ce0(&local_40,local_40);
  }
  return uVar2;
}


