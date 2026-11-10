/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008db080; name: FUN_008db080
 */


undefined8 FUN_008db080(undefined8 *param_1,undefined8 param_2,short param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 local_58;
  long lStack_50;
  short local_48;
  undefined1 local_46;
  undefined2 local_44;
  undefined1 local_42;
  
  cVar1 = FUN_008db8c0(param_2);
  if (cVar1 == '\x1f') {
    lVar8 = 0;
    FUN_008db9d0(param_2);
LAB_008db160:
    cVar1 = FUN_008db9d0(param_2);
    if ((param_3 != 0xd3) && (cVar1 == '\x05')) {
      uVar5 = FUN_00931930(param_1[1]);
      uVar4 = FUN_00932ae0(uVar5,5);
      if (((uVar4 & 1) != 0) ||
         ((lVar8 != 0 &&
          ((uVar4 = FUN_008e1810(lVar8,0x13), (uVar4 & 1) != 0 ||
           (uVar4 = FUN_008e2df0(lVar8,9), (uVar4 & 1) != 0)))))) goto LAB_008db290;
    }
    FUN_00931990(param_1[1]);
    lVar8 = FUN_008dd020();
    uVar5 = 0;
    if (lVar8 != 0) {
      do {
        pcVar6 = (code *)FUN_008db8f0(lVar8);
        if ((pcVar6 != (code *)0x0) && (uVar4 = FUN_008dba50(lVar8), (uVar4 & 1) == 0)) {
          cVar1 = FUN_008db9d0(lVar8);
          if (cVar1 == '\x04') {
            uVar3 = FUN_008db8c0(lVar8);
            uVar5 = FUN_00931920(param_1[1]);
            lVar7 = FUN_008df3f0(uVar5,uVar3);
            if ((lVar7 != 0) &&
               ((uVar4 = FUN_008e1810(lVar7,0x10), (uVar4 & 1) != 0 ||
                (uVar4 = FUN_008e1830(lVar7), (uVar4 & 1) != 0)))) goto LAB_008db27c;
          }
          local_60 = *param_1;
          local_58 = param_1[1];
          lStack_50 = lVar8;
          local_48 = param_3;
          local_46 = FUN_008db9d0(param_2);
          local_44 = FUN_008dba00(param_2);
          local_42 = FUN_008db9f0(param_2);
          uVar4 = (*pcVar6)(&local_60);
          if ((uVar4 & 1) != 0) goto LAB_008db290;
        }
LAB_008db27c:
        lVar8 = FUN_008db990(lVar8);
      } while (lVar8 != 0);
      uVar5 = 0;
    }
  }
  else {
    uVar3 = FUN_008db8c0(param_2);
    uVar5 = FUN_00931920(param_1[1]);
    lVar8 = FUN_008deea0(uVar5,uVar3);
    cVar1 = FUN_008db9d0(param_2);
    if ((lVar8 == 0) || (cVar1 != '\x04')) goto LAB_008db160;
    uVar4 = FUN_008e1810(lVar8,0x10);
    if (((uVar4 & 1) == 0) && (uVar4 = FUN_008e1830(lVar8), (uVar4 & 1) == 0)) {
      uVar4 = FUN_008e1570(lVar8);
      if ((uVar4 & 1) != 0) {
        uVar2 = FUN_008dba00(param_2);
        uVar4 = FUN_008dd6f0(uVar2);
        if ((uVar4 & 1) != 0) goto LAB_008db290;
      }
      uVar4 = FUN_008e0a10(lVar8);
      if ((uVar4 & 1) != 0) {
        uVar2 = FUN_008dba00(param_2);
        uVar4 = FUN_008dd720(uVar2);
        if ((uVar4 & 1) != 0) goto LAB_008db290;
      }
      goto LAB_008db160;
    }
LAB_008db290:
    uVar5 = 1;
  }
  return uVar5;
}


