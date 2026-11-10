/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0032a960; name: FUN_0032a960
 */


void FUN_0032a960(undefined8 param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 local_98;
  undefined1 local_90 [64];
  undefined1 local_50;
  undefined1 *local_48;
  ulong local_40;
  long *local_38;
  
  uVar2 = *(uint *)(param_3 + 0x210);
  local_38 = param_2;
  if (uVar2 < (*(uint *)(param_3 + 0x214) & 0x7fffffff)) {
    *(long **)(*(long *)(param_3 + 0x208) + (ulong)uVar2 * 8) = param_2;
    *(uint *)(param_3 + 0x210) = uVar2 + 1;
  }
  else {
    FUN_0032b000(param_3,&local_38);
  }
  local_40 = 0x800000000;
  local_50 = 1;
  local_48 = local_90;
                    /* try { // try from 0032a9d8 to 0032a9df has its CatchHandler @ 0032aaa4 */
  uVar2 = (**(code **)(*local_38 + 0x1c8))();
  local_98 = 0;
                    /* try { // try from 0032a9e4 to 0032a9f3 has its CatchHandler @ 0032aa94 */
  FUN_0032af20(local_90,uVar2,&local_98);
                    /* try { // try from 0032aa04 to 0032aa0f has its CatchHandler @ 0032aaa4 */
  (**(code **)(*local_38 + 0x1d0))(local_38,local_48,uVar2,0);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
                    /* try { // try from 0032aa24 to 0032aa2f has its CatchHandler @ 0032aab4 */
      FUN_0032a960(param_1,*(undefined8 *)(local_48 + uVar4 * 8),param_3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  puVar1 = local_48;
  if ((((-1 < (long)local_40) && ((local_40 & 0x7fffffff00000000) != 0)) && (local_90 != local_48))
     && (local_48 != (undefined1 *)0x0)) {
                    /* try { // try from 0032aa60 to 0032aa73 has its CatchHandler @ 0032aa90 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,puVar1);
  }
  return;
}


