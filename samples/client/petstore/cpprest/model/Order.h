/*
 * Order.h
 * 
 * 
 */

#ifndef Order_H_
#define Order_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Order
	: public ModelBase
{
public:
    Order();
    virtual ~Order();

	/////////////////////////////////////////////
	/// ModelBase overrides
	
    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;
    
 	/////////////////////////////////////////////
	/// Order members
	   
    /// <summary>
    /// 
    /// </summary>
    int64_t getId() const;
    void setId(int64_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    int64_t getPetId() const;
    void setPetId(int64_t value);
    bool petIdIsSet() const;
    void unsetPetId();
    /// <summary>
    /// 
    /// </summary>
    int32_t getQuantity() const;
    void setQuantity(int32_t value);
    bool quantityIsSet() const;
    void unsetQuantity();
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getShipDate() const;
    void setShipDate(utility::datetime value);
    bool shipDateIsSet() const;
    void unsetShipDate();
    /// <summary>
    /// Order Status
    /// </summary>
    utility::string_t getStatus() const;
    void setStatus(utility::string_t value);
    bool statusIsSet() const;
    void unsetStatus();
    /// <summary>
    /// 
    /// </summary>
    bool getComplete() const;
    void setComplete(bool value);
    bool completeIsSet() const;
    void unsetComplete();
    
protected:
    int64_t m_Id;
    bool m_IdIsSet;
int64_t m_PetId;
    bool m_PetIdIsSet;
int32_t m_Quantity;
    bool m_QuantityIsSet;
utility::datetime m_ShipDate;
    bool m_ShipDateIsSet;
utility::string_t m_Status;
    bool m_StatusIsSet;
bool m_Complete;
    bool m_CompleteIsSet;
};

}
}
}
}

#endif /* Order_H_ */
