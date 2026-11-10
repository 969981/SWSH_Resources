/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fde50; name: FUN_009fde50
 */


uint FUN_009fde50(long param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  uVar10 = FUN_0087d610(*param_2,2);
  if ((uVar10 & 1) != 0) {
    return 1;
  }
  uVar4 = FUN_008783b0(*param_2);
  uVar5 = FUN_008783c0(*param_2);
  uVar3 = FUN_008787f0(*param_2);
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0x8000;
  }
  uVar6 = FUN_009fe1a0(*(long *)(param_1 + 0x10),5);
  uVar7 = FUN_0087a5f0(*param_2);
  cVar2 = FUN_009ff100(*(undefined8 *)(param_1 + 0x10));
  if (cVar2 == '\x02') {
    bVar1 = uVar6 < uVar7;
  }
  else {
    if (cVar2 != '\x01') {
      uVar6 = 0;
      goto LAB_009fdf10;
    }
    bVar1 = uVar7 < uVar6;
  }
  uVar6 = (uint)bVar1 << 4;
LAB_009fdf10:
  uVar10 = FUN_009ff4e0(*(undefined8 *)(param_1 + 0x10),uVar4,uVar5);
  uVar7 = uVar6 | 4;
  if ((uVar10 & 1) == 0) {
    uVar7 = uVar6;
  }
  uVar10 = FUN_00879860(*param_2);
  uVar6 = uVar7;
  if ((uVar10 & 1) != 0) {
    uVar10 = FUN_009ff500(*(undefined8 *)(param_1 + 0x10),uVar4,uVar5);
    uVar6 = uVar7 | 0x1000;
    if ((uVar10 & 1) == 0) {
      uVar6 = uVar7;
    }
  }
  uVar10 = FUN_009ff330(*(undefined8 *)(param_1 + 0x10),1,uVar3);
  uVar7 = uVar6 | 8;
  if ((uVar10 & 1) == 0) {
    uVar7 = uVar6;
  }
  cVar2 = FUN_0087b890(*param_2);
  uVar11 = *param_2;
  if (cVar2 != '\0') {
    uVar6 = 0;
    uVar9 = uVar7;
    do {
      uVar4 = FUN_0087b880(uVar11,uVar6);
      uVar10 = FUN_009ff330(*(undefined8 *)(param_1 + 0x10),0,uVar4);
      uVar6 = uVar6 + 1;
      uVar7 = uVar9 | 2;
      if ((uVar10 & 1) == 0) {
        uVar7 = uVar9;
      }
      uVar8 = FUN_0087b890(*param_2);
      uVar11 = *param_2;
      uVar9 = uVar7;
    } while ((uVar6 & 0xff) < (uVar8 & 0xff));
  }
  uVar4 = FUN_00878a60();
  uVar10 = FUN_009ff990(*(undefined8 *)(param_1 + 0x10),uVar4);
  if ((uVar10 & 1) == 0) {
    uVar6 = FUN_009fed30(*(undefined8 *)(param_1 + 0x10),0);
    uVar10 = FUN_009ff990(*(undefined8 *)(param_1 + 0x10),0x2c);
    if ((((uVar10 & 1) != 0) &&
        (uVar9 = FUN_009ff990(*(undefined8 *)(param_1 + 0x10),0x2d), (uVar6 & uVar9 & 1) != 0)) &&
       (uVar10 = FUN_014adfd0(*param_2), (uVar10 & 1) != 0)) {
      return uVar7;
    }
    if ((uVar6 & 1) == 0) {
      uVar7 = uVar7 | 4;
    }
    else {
      uVar7 = uVar7 | 0x2000;
    }
  }
  return uVar7;
}


