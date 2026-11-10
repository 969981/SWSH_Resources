/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039b420; name: FUN_0039b420
 */


void FUN_0039b420(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_003a6bb0(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  local_28 = 0;
  FUN_001ed3f0(param_1 + 0x1fc0,0,&local_28);
  FUN_001ed4d0(param_1 + 0x1fc0,*(undefined4 *)(param_1 + 0x1fc8));
  local_24 = 0;
  FUN_001ed3f0(param_1 + 0x1fd0,0,&local_24);
  FUN_001ed4d0(param_1 + 0x1fd0,*(undefined4 *)(param_1 + 0x1fd8));
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar2 != 0) {
    FUN_00397690(lVar2);
                    /* try { // try from 0039b4e4 to 0039b4f7 has its CatchHandler @ 0039b54c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  lVar2 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar2 != 0) {
    FUN_00397690(lVar2);
                    /* try { // try from 0039b50c to 0039b51f has its CatchHandler @ 0039b548 */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x1f80) = 0;
  *(undefined4 *)(param_1 + 0x1ff0) = 0;
  *(undefined1 *)(param_1 + 0x1fe1) = 0;
  return;
}


