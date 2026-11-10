/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007275b0; name: FUN_007275b0
 */


void FUN_007275b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = 0;
  local_50 = 0x5a714284d77b0b4;
  local_48 = "DepthBuffer";
  local_40 = 0xb;
  lVar1 = *(long *)(param_1 + 0x368);
  lVar2 = *(long *)(param_1 + 0x370);
  if (lVar1 != lVar2) {
    do {
      if ((*(byte *)(lVar1 + 0x38) & 1) != 0) {
        FUN_0072f680(lVar1,&local_50,param_2,1);
      }
      lVar1 = lVar1 + 0x48;
    } while (lVar2 != lVar1);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return;
}


