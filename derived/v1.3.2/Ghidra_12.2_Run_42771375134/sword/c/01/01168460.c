/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01168460; name: FUN_01168460
 */


void FUN_01168460(undefined1 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  char local_a0 [16];
  long *local_90;
  long alStack_80 [4];
  long *local_60;
  undefined8 local_50;
  long local_40;
  
  if ((*(long *)(param_2 + 0x80) == 0) ||
     (puVar5 = *(undefined8 **)(*(long *)(param_2 + 0x80) + 0x60), puVar5 == (undefined8 *)0x0)) {
    FUN_011537b0(param_2 + 0x88);
  }
  else {
    puVar9 = puVar5 + -10;
    (**(code **)*puVar5)();
    uVar6 = FUN_01168be0();
    if ((uVar6 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
    }
    lVar7 = FUN_011537b0(param_2 + 0x88);
    if (((puVar9 != (undefined8 *)0x0) && (lVar7 != 0)) &&
       (FUN_0120e660(local_a0,*(undefined8 *)PTR_DAT_027185f8), local_a0[0] != '\0')) {
      auVar10 = FUN_0119d110(puVar9,0);
      uVar1 = 0;
      if ((auVar10._0_8_ & 0xff) != 0) {
        uVar1 = auVar10._8_8_;
      }
      auVar10 = FUN_0119d110(puVar9,1);
      uVar2 = 0;
      if ((auVar10._0_8_ & 0xff) != 0) {
        uVar2 = auVar10._8_8_;
      }
      auVar10 = FUN_0119d110(puVar9,2);
      uVar3 = 0;
      if ((auVar10._0_8_ & 0xff) != 0) {
        uVar3 = auVar10._8_8_;
      }
      auVar10 = FUN_0119d110(puVar9,3);
      uVar4 = 0;
      if ((auVar10._0_8_ & 0xff) != 0) {
        uVar4 = auVar10._8_8_;
      }
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      *(undefined8 *)(param_1 + 8) = uVar1;
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      *param_1 = 1;
      if (local_a0[0] == '\0') {
        return;
      }
      if (local_40 != 0) {
        (**(code **)(*local_90 + 0x18))(local_90,local_50,local_40 << 3,8);
      }
      if (alStack_80 == local_60) {
        pcVar8 = *(code **)(*local_60 + 0x20);
      }
      else {
        if (local_60 == (long *)0x0) {
          return;
        }
        pcVar8 = *(code **)(*local_60 + 0x28);
      }
      (*pcVar8)();
      return;
    }
  }
  *param_1 = 0;
  return;
}


