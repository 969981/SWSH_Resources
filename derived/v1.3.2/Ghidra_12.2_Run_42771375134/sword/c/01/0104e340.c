/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0104e340; name: FUN_0104e340
 */


void FUN_0104e340(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 local_a0;
  code *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [96];
  
  uVar2 = *(undefined8 *)PTR_DAT_02710850;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  local_98 = (code *)0x0;
  if ((code *)param_1[2] != (code *)0x0) {
    (*(code *)param_1[2])(param_1 + 4,auStack_80);
    local_a0 = *param_1;
    local_98 = (code *)param_1[1];
    local_90 = param_1[2];
    uStack_88 = param_1[3];
  }
  FUN_010260b0(uVar2,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    local_98 = (code *)0x0;
    (*pcVar1)(auStack_80);
  }
  return;
}


