/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fa600; name: FUN_011fa600
 */


void FUN_011fa600(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 local_28 [2];
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_017cfff0(param_1 + 2);
  *(undefined4 *)(param_1 + 5) = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((long)param_1 + 0x2c));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((long)param_1 + 0x2c),(Result *)local_28);
  param_1[7] = 0;
  uVar1 = nn::err::ErrorCode::GetInvalidErrorCode();
  param_1[8] = uVar1;
  return;
}


