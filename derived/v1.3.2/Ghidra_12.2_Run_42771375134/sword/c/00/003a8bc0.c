/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a8bc0; name: FUN_003a8bc0
 */


void FUN_003a8bc0(long param_1,undefined4 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  
  local_50 = *param_2;
  local_4c = param_2[1];
  local_48 = param_2[2];
  local_44 = param_2[3];
  local_40 = param_2[4];
  local_3c = param_2[5];
  local_38 = 1;
  FUN_00218ad0(param_3,&local_50);
  if ((param_2[6] & 1) == 0) {
    FUN_003a8bc0(param_1,param_1 + (ulong)((uint)param_2[6] >> 1) * 0x1c,param_3);
    lVar2 = param_1 + (ulong)((uint)param_2[6] >> 1) * 0x1c;
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 + 0x1c;
    }
    FUN_003a8bc0(param_1,lVar1,param_3);
  }
  return;
}


