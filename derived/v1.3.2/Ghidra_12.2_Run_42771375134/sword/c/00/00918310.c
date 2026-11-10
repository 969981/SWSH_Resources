/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00918310; name: FUN_00918310
 */


void FUN_00918310(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  char cVar8;
  uint uVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  param_1[1] = param_2;
  uVar9 = param_2;
  while( true ) {
    uVar5 = *(undefined1 *)((long)param_1 + (ulong)uVar9 + 8);
    uVar6 = *(undefined1 *)((long)param_1 + (ulong)(uVar9 + 1) + 8);
    uVar1 = uVar9 + 2;
    param_1[1] = uVar1;
    uVar2 = (uint)CONCAT11(uVar5,uVar6);
    uVar7 = (ulong)uVar2;
    if ((uVar2 != 0xc2) && (uVar2 != 0xbf)) break;
    uVar9 = uVar9 + *(byte *)((long)param_1 + (ulong)uVar1 + 8) + 3;
    param_1[1] = uVar9;
    if (uVar3 <= uVar9) {
      uVar7 = 0xbe;
      *param_1 = param_2;
      uVar9 = param_2;
LAB_009183c4:
      local_40 = 0;
      uStack_38 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      FUN_00916c20(param_1,uVar7,(&DAT_0214a848)[uVar7],&local_70);
      cVar8 = (char)*param_1 - (char)uVar9;
LAB_009183f4:
      uVar9 = uVar9 & 0xffff;
      *(undefined1 *)((long)param_1 + (ulong)uVar9 + 8) = 0;
      *(undefined1 *)((long)param_1 + (ulong)(uVar9 + 1) + 8) = 0xc2;
      *(char *)((long)param_1 + (ulong)(uVar9 + 2) + 8) = cVar8 + -3;
      *param_1 = uVar3;
      param_1[1] = uVar4;
      return;
    }
  }
  if ((uVar2 | 1) != 0xc1) {
    *param_1 = uVar9;
    goto LAB_009183c4;
  }
  *param_1 = uVar9;
  param_1[1] = uVar9 + 3;
  cVar8 = *(char *)((long)param_1 + (ulong)uVar1 + 8);
  if (cVar8 == '\0') goto LAB_009183c4;
  cVar8 = cVar8 + '\x03';
  goto LAB_009183f4;
}


