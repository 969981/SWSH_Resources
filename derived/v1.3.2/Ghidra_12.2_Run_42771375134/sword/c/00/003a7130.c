/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a7130; name: FUN_003a7130
 */


void FUN_003a7130(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = *(undefined8 *)(param_1 + 0x1f08);
  local_28 = 0;
  local_38 = CONCAT44(*(undefined4 *)(param_1 + 0x1f18),4);
                    /* try { // try from 003a7160 to 003a717b has its CatchHandler @ 003a71b0 */
  FUN_00397a80(*(undefined8 *)(param_1 + 0x1ee0),&local_38);
  FUN_003a6200(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x1f18),*(undefined8 *)(param_1 + 0x1ee0))
  ;
  lVar1 = local_28;
  local_38 = 0;
  local_30 = 0;
  if (local_28 != 0) {
                    /* try { // try from 003a7188 to 003a719b has its CatchHandler @ 003a71ac */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
  }
  return;
}


