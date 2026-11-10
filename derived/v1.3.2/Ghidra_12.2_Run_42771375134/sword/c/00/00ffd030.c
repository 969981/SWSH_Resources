/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffd030; name: FUN_00ffd030
 */


uint FUN_00ffd030(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [104];
  ulong local_28;
  
  if (param_2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_28 = 0xcbf29ce484222645;
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    local_28 = (local_28 ^ bVar1) * 0x100000001b3;
    bVar1 = *param_2;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  local_a8 = (code *)0x0;
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,auStack_90);
    local_b0 = *param_3;
    local_a8 = (code *)param_3[1];
    local_a0 = param_3[2];
    uStack_98 = param_3[3];
  }
  uVar3 = FUN_00ffd120(param_1,&local_28,&local_b0);
  pcVar2 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar2)(auStack_90);
  }
  return uVar3 & 1;
}


