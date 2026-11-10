/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103a290; name: FUN_0103a290
 */


void FUN_0103a290(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  
  puVar1 = PTR_DAT_027238d0 + 0xb8;
  puVar2 = PTR_DAT_027238d0 + 0xf8;
  *param_1 = (long)(PTR_DAT_027238d0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x174] != 0) {
    (**(code **)(*(long *)(param_1[0x174] + 0x48) + 0x18))();
    param_1[0x174] = 0;
  }
  param_1[0x152] = (long)(PTR_DAT_02710a78 + 0x10);
  if (param_1[0x153] == 0) {
    param_1[0x153] = 0;
    pcVar4 = (code *)param_1[0x165];
  }
  else {
    FUN_006e2100(param_1[0x153],param_1 + 0x152);
    lVar3 = param_1[0x153];
    param_1[0x153] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    pcVar4 = (code *)param_1[0x165];
  }
  if (pcVar4 != (code *)0x0) {
    param_1[0x167] = 0;
    param_1[0x166] = 0;
    param_1[0x165] = 0;
    param_1[0x164] = 0;
    (*pcVar4)(param_1 + 0x168);
  }
  pcVar4 = (code *)param_1[0x155];
  if (pcVar4 != (code *)0x0) {
    param_1[0x157] = 0;
    param_1[0x156] = 0;
    param_1[0x155] = 0;
    param_1[0x154] = 0;
    (*pcVar4)(param_1 + 0x158);
  }
  if (param_1[0x153] != 0) {
    (**(code **)(*(long *)(param_1[0x153] + 0x48) + 0x18))();
    param_1[0x153] = 0;
  }
  if (param_1[0x151] != 0) {
    (**(code **)(*(long *)(param_1[0x151] + 0x48) + 0x18))();
    param_1[0x151] = 0;
  }
  FUN_00891ee0(param_1 + 0x11e);
  FUN_0103a560(param_1);
  return;
}


