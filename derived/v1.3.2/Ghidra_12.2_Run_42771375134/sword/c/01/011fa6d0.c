/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fa6d0; name: FUN_011fa6d0
 */


void FUN_011fa6d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 local_50 [4];
  undefined1 auStack_40 [24];
  undefined4 local_28 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  local_50[0] = CONCAT31(local_50[0]._1_3_,1);
  FUN_017d0040(auStack_40,local_50);
  FUN_017d0120(param_1 + 2,auStack_40);
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  FUN_018725b0(param_1 + 5,local_50);
  param_1[7] = 0xcbf29ce484222645;
  uVar1 = nn::err::ErrorCode::GetInvalidErrorCode();
  param_1[8] = uVar1;
  return;
}


